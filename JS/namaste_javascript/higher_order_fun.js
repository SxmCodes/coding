/* A function which takes another function as an argument inside it is known as higher order function. */

function x() {
    console.log("This is X");
}
// Y here is the higher order function.
function y(x) {
    x();
}
