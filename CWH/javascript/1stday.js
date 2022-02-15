// Try, Catch and Finally. Error handling in JavaScript.
let a = "Saksham Sharma";
a = undefined;
if (a != undefined) {
  throw new Error("This is not undefined");
} else {
  console.log("This is undefined.");
}
// Try, Catch and Finally concept.
try {
  console.log("We are in try block.");
} catch (error) {
  console.log("Are you okay?");
  // Different kinds of functions with errors.
  // This will tell you error in txt form.
  console.log(error);
  // This will tell you the name of the error.
  console.log(error.name);
  // This will tell you why the error has occured.
  console.log(error.message);
} finally {
  // This means that if there is a error or not but this will be executed.
  console.log("We will run this.");
}
