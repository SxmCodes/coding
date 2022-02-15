/** This is known as Hoisting, 
 * JavaScript allows you to call anything even if it's not made.
 */
var x = 10;

function getName() {
  console.log("Saksham Sharma.");
}

getName();
console.log(x);

console.log(getName);