// We have to make a web crawler.
// We have to create a variable which is a string containing the text which is a link We are interested in.

// We have to fetch all the links from a given page which contains this text

// codewithharry.com
// javascript

// This will give you all of the links which have "python" keyword in them.
let string = "python";
// We had included all of the links inside this document.
let links = document.links;
console.log(links);
let href;
Array.from(links).forEach(function (element) {
  href = element.href;
  if (href.includes(string)) {
    console.log(href);
  }
});
