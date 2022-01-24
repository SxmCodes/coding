// Destructing in javascript.
let a, b;
// It will assign 34 to a and 564 to b.
[a, b] = [34, 564];

console.log("This is to tell the concept of object and variables.");
// This will print 34.
console.log(a);
// This will print 564.
console.log(b);
// This will print both.
console.log(a, b);

/* If we write more values as varialbes. Then it will create confusion, We will handle this by destructing.
If we write ... in front of c then 1,2,3 will be assigned to a1, b1, c1 and rest all will go as array to c.
*/
[a1, b1, ...c1] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
console.log("This is to tell that everything is stored in c as an array.");
console.log(a1);
console.log(b1);
console.log(c1);

({ a2, b2, c2, ...d2 } = {
  a2: 100,
  b2: 1000,
  c2: 10000,
  d2: 1,
  e2: 2,
  f2: 69,
});
// This d will print the d, e and f inside an object.
console.log(a2, b2, c2, d2);
