const CACHE_NAME = 'static-cache-v1';

//Add list of files to cache here.
const FILES_TO_CACHE = [
    '/',
    'index.html',
    'css/style.css',
    'css/weather-icons.min.css',
    'images/weatherPlus.jpg',
    'images/android-chrome-192x192.png',
    'images/android-chrome-512x512.png',
    'images/favicon-32x32.png',
    'images/favicon-16x16.png',
    'images/mstile-150x150.png',

];

self.addEventListener('install', (evt) => {
    //Precache static resources here
    evt.waitUntil(
        caches.open(CACHE_NAME).then((cache) => {
            return cache.addAll(FILES_TO_CACHE);
        })
    );

    self.skipWaiting();
})

self.addEventListener('activate', (evt) => {
    

   // Remove previous cached data from disk
   evt.waitUntil(
       caches.keys().then((keyList) => {
           return Promise.all(keyList.map((key) => {
               if (key !== CACHE_NAME) {
                   console.log('[ServiceWorker] Removing old cache', key);
                   return caches.delete(key);
               }
           }));
       })
   );

   self.clients.claim();
})

self.addEventListener('fetch', (evt) => {
    //Add  fetch event handler here
    if (evt.request.mode !== 'navigate') {
        //Not a page navigation, bail
        return;
    }
    evt.respondWith(
        // fetch(evt.request)
        //     .catch(async () => {
        //         const cache = await caches.open(CACHE_NAME);
        //         return caches.match('index.html');
        //     })

        caches.match(evt.request).then((response) => {
            return response || fetch(evt.request);
        })
    );
});


