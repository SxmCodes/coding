console.log("Welcome to regex...");
let reg = /Saksham/; // This is the regular expression literal.

// To find every Saksham inside the sentence.
// Another things we can do.
// reg = /Saksham/g // This is the search globally. G means Global
// reg = /Saksham/i // I means Case insenstivity.

console.log(reg);
console.log(reg.source);

let s = "Saksham is the greatest of all. Saksham is the best.";


// Functions to match expressions for advance searching.
// 1) exec() --> This will return an array for match or null for no match.
let result = reg.exec(s);
console.log(result);

// This will also return the same thing which the first one will do, to match the second Saskham as well, I want to write g (global) at the end of Saksham.
let result = reg.exec(s);

// Playing with the result.
if (result) {
  // If the match is not found then the value of result would be null, it would throw error.
  console.log(result); // This will tell you all in one.
  console.log(result.input); // This will tell you the input string.
  console.log(result.index); // This will tell you the index of particular word.
}
// 2) test() --> Returns true or false.
let result2 = reg.test(s)
console.log(result2);

// 3) match() --> It will return an array of results or null.
// let result3 = reg.match()  --> This is wrong.
// let result3 = s.match(reg)  --> This is right.
let result3 = s.match(reg)
console.log(result3);

// 4) search() --> It will return index of first match or -1.
let result4 = s.search(reg)

// 5) replace() --> It will return new replaced string with all new replacements.(important)
let result5 = s.replace(reg, 'ELON MUSK')
console.log(result5);
