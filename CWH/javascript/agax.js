let fetchBtn = document.getElementById("fetchBtn");

const buttonClickHandler = () => {
  console.log("You had click the fetch button.");

  // Creating the object.
  const xhr = new XMLHttpRequest();
 
  // Opening the object.
  xhr.open("GET", "saksham.txt", true);

};

fetchBtn.addEventListener("click", buttonClickHandler);
