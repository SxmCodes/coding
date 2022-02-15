// Call stack is also known as main thread.
setTimeout(function () {
  console.log("Timer");
}, 2000);

function x(y) {
    console.log("This is X");
    y();
}
// If any function blocks the call stack it's known as "breaking the main thread".
x(function y() {
  console.log("This is Y");
});
