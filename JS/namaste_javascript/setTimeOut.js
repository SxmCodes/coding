// In this function, we have to write the code to print 1 to 5 in order of there seconds, so 1 will appear after 1 second, 2 after 2 seconds and so on till 5.

function x() {
  // in this function, the output will be 6,6,6,6,6 but insted we wanted 1,2,3,4,5
  /*
    When the loop runes for the first time, it makes copy of the function and attach the timer to it, and also remembering the reference in order to call that function when needed. 

    JS waits for no one, so after iterating looop 5 times it goes to another line and by the time the timer expires it's too late, the value of i was 6 and it calles 6 (5) times. Loop was continuously running, by the time i becomes 6 it was too late so it outputs 6 (5) times.

	In order to solve this problem, we can use let insted of var in for loop, because let is a blocked scope and each time the functions runs, it makes a whole new copy for that variable i, so each time i runs, it has different values in it throughout the program.

	let -> functions form a closure with new variable let will store 5 copies of i and they form closure with every function.

	If in interviews, interviewer can ask this question that do this without using let, then we have to iterate the function 5 times differently, so we will use function z for it. Here we can use power of closure.
  */
  // with var (not properly runnning)
  for (var i = 1; i <= 5; i++) {
    setTimeOut(function () {
      console.log(i);
    }, i * 1000);
  }
  //  with let (properly running)
  for (let i = 1; i <= 5; i++) {
    setTimeOut(function () {
      console.log(i);
    }, i * 1000);
  }
  // with var (properly running because of closure)
  for (var i = 1; i <= 5; i++) {
    var b = function (x) {
      setTimeOut(function () {
        console.log(x);
      }, i * 1000);
    };
  }
}
x();
