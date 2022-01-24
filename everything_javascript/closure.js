function x() {
  for (var i = 1; i <= 5; i++) {
    function close(x) {
      setTimeout(function () {
        console.log(x);
      }, x * 1000);
    }
      close(i);
    // Copy of i refers to same memory location.
    // Let is in block scope.
  }
  console.log("Hello");
}
x();
