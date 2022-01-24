let groceries = ["apple", "bananas", "oranges"];
for (let i = 0; i < groceries.length; i++) {
  console.log(groceries[i]);
  // I is the object inside an array.
}
// Function to add 2 numbers.
function add(num1, num2) {
  let sum = num1 + num2;
  return sum;
}
console.log(add(5, 6))

// Return a string what I had given you.
function spitter(string) {
    return string;
}
console.log(spitter("Saksham"))

// Function for reverser(reverse anything which we give).
function reverser(string2) {
    // return thing.reverse(), this will not work.
    //Reverse is a function which is for arrays not for strings.
    // For reversing it we have to split it in order to make it an array.
    return string2.split('').reverse('').join('')
}
console.log(reverser("Kush Bhi"))

// console.log('saksham'.split('').reverse().join())
// SPLIT is used in making string into arrays.
// JOIN is used in making arrays back into strings.
// REVERSE is used in reversing the arrays.

//If else statements.
let saksham = "hungry"
// Agar saksham = hungry, khana khalo.
// Agar saksham != hungry, kaam karo.
if (saksham === "hungry") {
    return "Khana Khalo." // We can user return also.
}
else {
   return "Kam Karo."
}

// Palindrome concept.
function palindrome(words) {
    if (words === reverser(words)) {
        return true;
    }
    else {
        return false;
    }
}