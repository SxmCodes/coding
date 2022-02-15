// Button with ID myBtr.
let myBtn = document.getElementById("myBtn");
// Div with ID content.
let content = document.getElementById("content");

/* We can return a json file as well and it can parse the data, there are many things we can do with it.*/ 

// This is get request with fetch api.
function getData() {
  // This will ask for promise. We can pass another url like api.github.com/users
  url = "saksham.txt";
  fetch(url)
    .then((response) => {
      // We can write json here if we have to pass the api users data as json format, it will parse the data.
      return response.text();
    })
    .then((data) => {
      console.log(data);
    });
}

// This is post request via fetch api.
function postData() {
  url = "dummy.restapi.example.com/api/v1/create";
  data = '{name:"Saksham", salary:"120000000", age="16"}'

  params = {
    method: 'post',
    headers = {
      'Content-Type': 'application/json'
    },
    body:data
  }

  // This will take parameters and data.
  fetch(url, params)
    .then((response) => {
      return response.text();
    })
    .then((data) => {
      console.log(data);
    });
}

getData();
