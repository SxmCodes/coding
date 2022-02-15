// We should not block our main thread, it will effect our whole code.
console.log("Start");

setTimeout(function ab() {
  console.log("Callback");
}, 5000);

console.log("End");

// This was kind of blocking the main thread for 10 seconds.
let startDate = new Date().getTime();
let endDate = startDate;
while (endDate < startDate + 10000) {
  endDate = new Date().getTime();
}
console.log("while expires");
