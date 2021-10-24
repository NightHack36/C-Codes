function fetchDogImg() {
    var xhr = new XMLHttpRequest();
    xhr.onload = function () {
        console.log(xhr.response);
        var jsonresponse = JSON.parse(xhr.response);
        var imgUrl = jsonresponse.message;
        $('#dog-image').attr('src', imgUrl);
    };
    xhr.open('get', 'https://dog.ceo/api/breeds/image/random', true);
    xhr.send();

};
$('#fetch-dog-btn').click(fetchDogImg);