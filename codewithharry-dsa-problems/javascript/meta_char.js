// Meta Chatracters in regex.
console.log("Welcome to this metachar thing in regex.");
let regex = /saksham/

// Meta Character Symbols :-
regex = /^s/ // This means the expression starts with given letter.
regex = /t$/ // This means the expression ends with given letter.
regex = /sa.sham/ // This means that there should be any one character in the place of . but just 1.
regex = /sa*sham/; // This means that there would be more than 1 characters
regex = /sak?shami?/; // This means that the character before ? is optional.
regex = /s\*ksham/ // This means that we have * character not that optional one, now we can use star in string.

let str = "saksham is a good boy and saksham is great"
let result = regex.exec(str)

console.log("The result from exec is :- ", result);

if (regex.test(str)) {
    console.log(`The string ${str} matches the expression ${regex.source}`);   
}
else {
    console.log(`The string ${str} does not matches the expression ${regex.source}`);   
}
