 //==================== DOM Elements =======================//
 let spinner = document.querySelector('.spinner-wrapper');

 let search = document.querySelector('#search');

 let searchIcon = document.querySelector('.search__icon');

 let weatherPreview = document.querySelector('.weather__preview');

 let weatherDetails = document.querySelector('.weather__details');

 let weatherDescription = document.querySelector('.weather__description');

 let futureWeatherForecast = document.querySelector('.future__weather__forecast');


//=============Filling First Data ==========//
const firstData = (weatherReport, weatherReports) => {
    let realReport;

    if (weatherReport) {
       realReport = weatherReport;
    } else {
       realReport = weatherReports;
    }

    const  {name, sys, weather, main, id, dt, visibility, wind, coord} = realReport;

    let day, month, dateNumber, year, checkDay, checkMonth, checkYear;

    // Create a new JavaScript Date object based on the timestamp
    // multiplied by 1000 so that the argument is in milliseconds, not seconds.
    let date = new Date(dt * 1000);
    let today = new Date();


    let months = ['Jan','Feb','Mar','Apr','May','Jun','Jul','Aug','Sep','Oct','Nov','Dec'];
    let days = ['Sun', 'Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat']

    // getDateFromTimeStamp(dt, day, month, dateNumber, year);
    day = days[date.getDay()];
    month = months[date.getMonth()];
    checkMonth = months[today.getMonth()];
    year = date.getFullYear();
    checkYear = today.getFullYear();
    dateNumber = date.getDate() < 10 ? `0${date.getDate()}` : date.getDate();
    checkDate = today.getDate() < 10 ? `0${today.getDate()}` : today.getDate();

    if (dateNumber !== checkDate || month !== checkMonth || year !== checkYear) {
        weatherQuery(coord.lat, coord.lon);
    } else {
        //modify weatherPreview with API content
        weatherPreview.style.display = 'block';
    
        weatherPreview.innerHTML = `
            <div class="right">
                <p class="city__name">
                    <i class="fas fa-map-marker-alt"></i>
                    <span>${name}</span>
                    <sup class="country__name">${sys.country}</sup>
                </p>
                <div>
                    <p class="date">${day}, ${month} ${dateNumber} ${year}</p>
                </div>
            </div>
        `;
    
    
        //modify weatherDescription with API content
        weatherDescription.style.display = 'block';
    
        weatherDescription.innerHTML = `
            <div class="left">
                <div>
                    <p class="temp">${Math.round(main.temp)}<sup>o</sup>C</p>
                    <p class="max__min__temp">${Math.round(main['temp_max'])}<sup>o</sup>C/${Math.round(main['temp_min'])}<sup>o</sup>C</p>
                </div>
                <figure>
                    <img class="weather__description__image"  src="https://openweathermap.org/img/wn/${weather[0].icon}@2x.png" alt="${weather[0].description}icon" height="150" width="150">
                    <figcaption>
                        <p class="weather__description__text">${weather[0].description}</p>
                    </figcaption>
                </figure>
            </div>
        `;
        
        //modify weatherDetails with API content
        weatherDetails.style.display = 'block'
    
        weatherDetails.innerHTML= `
            <div class="weather__detail">
                <p>
                <i class='wi wi-thermometer'></i>
                    Feels like
                </p>
                <p>${Math.round(main['feels_like'])}<sup>o</sup>C</p>
            </div>
    
            <div class="weather__detail">
                <p>
                    <i class='wi wi-humidity'></i>                      
                    Humidity
                </p>
                <p>${main['humidity']}%</p>
            </div>
    
            <div class="weather__detail">
                <p>
                <i class='wi wi-barometer'></i>
                    Pressure
                </p>
                <p>${main['pressure']} hPa</p>
            </div>
    
            <div class="weather__detail">
                <p>
                <i class='wi wi-strong-wind'></i>
                    Wind Speed
                </p>
                <p>${wind.speed}m/s</p>
            </div>
    
            <div class="weather__detail">
                <p>Visibility</p>
                <p>${visibility}</p>
            </div>
        `;
        
        search.value = '';

    }

}   

//=============Filling Second Data===========//
const secondData = (weatherFromCoord) => {
    futureWeatherForecast.innerHTML = '';
    const {daily} = weatherFromCoord;
    let date1 = new Date(daily[0].dt * 1000);
    let date2 = new Date();
    if ((date1.getDate() !== date2.getDate()) || (date1.getMonth() !== date2.getMonth()) || (date1.getFullYear() !== date2.getFullYear())) {
        null
    } else {

        daily.filter((date, idx) => idx > 0)
        .map(date => {

            //get Day from Timestamp
            let days = ['Sunday', 'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday'];

            // Create a new JavaScript Date object based on the timestamp
            // multiplied by 1000 so that the argument is in milliseconds, not seconds.
            let day, month, dateNumber, year;
            let time = new Date(date.dt * 1000);


            // getDateFromTimeStamp(dt, day, month, dateNumber, year);
            day = days[time.getDay()];

            //create A div with classname of card and set inner content based on data gotten from API call
            let card = document.createElement('div');
            card.classList.add('card');
            card.innerHTML = `
                   <p class="day">${day}</p>
                <div class="weather__preview__card">
                        <img src="https://openweathermap.org/img/wn/${date.weather[0].icon}@2x.png" alt="weather-icon">
                        <p>${Math.round(date.temp.day)}<sup>o</sup>C</p>
                </div>
                `;

            //append card to futureWeatherForecast and set display to flex
            futureWeatherForecast.appendChild(card);
            futureWeatherForecast.style.display = 'flex';

            spinner.style.display = 'none';
        
        });

    }
}

//====================Weather Forecast from Coordinates==============//
const weatherForecast = async(coord) => {
    
    futureWeatherForecast.innerHTML = '';
    let weatherFromCoord;

    try{
        const responseCoord = await fetch(`https://api.openweathermap.org/data/2.5/onecall?lat=${coord.lat}&lon=${coord.lon}&exclude=hourly,minutely,current&APPID=14bc53e6922ea2590b89900c74db5df3&units=metric`);
            
        weatherFromCoord = await responseCoord.json();

        let localCoordinates = JSON.parse(localStorage.getItem('localCoordinates'));

        localCoordinates = localCoordinates ? localCoordinates : [];

        localCoordinates.push(weatherFromCoord);

        localStorage.setItem('localCoordinates', JSON.stringify(localCoordinates));
        
        secondData(weatherFromCoord);

    } catch (error) {
        if (error == 'TypeError: Failed to fetch') {
            weatherDescription.style.display = 'none';
            weatherDetails.style.display = 'block';
            weatherDetails.innerHTML = "Please Check Network Connection 😩";
            spinner.style.display = 'none';
            search.value = '';
        } else {
            alert(error);
        }
    }
}


//====================Weather Query from Search Value==============//
const weatherQuery = async(lat, lon) => {
    
    //clear all content
    weatherDetails.innerHTML = '';
    weatherDescription.innerHTML = '';
    weatherPreview.innerHTML = '';
    futureWeatherForecast.innerHTML = '';
    spinner.style.display = 'block';

    let response

    try {
        if (lat && lon) {
            response = await fetch(`https://api.openweathermap.org/data/2.5/weather?lat=${lat}&lon=${lon}&APPID=14bc53e6922ea2590b89900c74db5df3&units=metric`);
        } else {
            response = await fetch(`https://api.openweathermap.org/data/2.5/weather?q=${search.value}&APPID=14bc53e6922ea2590b89900c74db5df3&units=metric`);
        }
        const weatherReport = await response.json();
        
        const {coord} = weatherReport;
        

        switch(true) {
            case weatherReport.cod==='404':
		        weatherDescription.style.display = 'none';
                weatherDetails.style.display = 'block';
                weatherDetails.innerHTML = "Please search for a valid city 😩";
                spinner.style.display = 'none';
                search.value = '';
                break;
            default:
                weatherForecast(coord);
                
                firstData(weatherReport);

                //Add to local storage array
                let weatherReports = JSON.parse(localStorage.getItem('weatherReports'));

                weatherReports = weatherReports ? weatherReports : [];

                weatherReports.push(weatherReport);

                localStorage.setItem('weatherReports', JSON.stringify(weatherReports));
        }

        
    } catch (error) {

        if (error == 'TypeError: Failed to fetch') {
            weatherDescription.style.display = 'none';
            weatherDetails.style.display = 'block';
            weatherDetails.innerHTML = "Please Check Network Connection 😩";
            spinner.style.display = 'none';
            search.value = '';
        } else {
            alert(error);
        }

    }
}

const searchEvent = () => {

    if(search.value === '') {
        return null;
    } else if(localStorage.getItem('weatherReports') !== null && localStorage.getItem('localCoordinates') !== null) {
        let localCoordinates = JSON.parse(localStorage.getItem('localCoordinates'));

        let weatherReports = JSON.parse(localStorage.getItem('weatherReports'));

        let  existingReport = weatherReports.filter(report => report.name.toLowerCase() === search.value.toLowerCase());

        let existingCoord;

        if ( existingReport.length === 0) {
            
            weatherQuery();

        } else {
            existingCoord = localCoordinates.filter(coord => coord.lat === existingReport[0].coord.lat);

            firstData(weatherReports = existingReport[existingReport.length - 1]);
    
            secondData(existingCoord[existingCoord.length - 1]);
        }
    } else {
        weatherQuery();
    }
}


//=================== Target Search Value =============//
searchIcon.addEventListener('click', searchEvent);

search.addEventListener('keypress', (e) => {
    if (e.keyCode === 13) {
        searchEvent();
    }
});

//====================Weather From User Location==============/
let useLocation = document.querySelector('#location');

useLocation.addEventListener('click', () => {
    let lon;
    let lat;

    if(navigator.geolocation) {
        navigator.geolocation.getCurrentPosition( (position) => {
            lat = position.coords.latitude;
            lon = position.coords.longitude;

            weatherQuery(lat, lon);
        });
    }
});


//====================Get Data from Local Storage=========//

(function getFromLocalStorage(){
    if(localStorage.getItem('weatherReports') !== null && localStorage.getItem('localCoordinates') !== null) {
        let localCoordinates = JSON.parse(localStorage.getItem('localCoordinates'));

        let weatherReports = JSON.parse(localStorage.getItem('weatherReports'));

        firstData(weatherReports = weatherReports[weatherReports.length - 1]);

        secondData(localCoordinates[localCoordinates.length - 1]);
    }
})();
