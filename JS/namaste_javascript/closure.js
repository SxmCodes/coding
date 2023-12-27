var a = 10; 

function y(){
	console.log(a);
}
return a; 

/* once you return y as function not just the code as returned bu tht whole closure was returned when you return it somewhere in your function, it konws reference to that variable a.
It knows the reference to a and it points to the updated value of a. Even the function is not in the lexical scope, it still rememners the reference and have access to all it's variables and functions.

Closures can be used in :-
1. Currying concept. 
2. SetTimeOut
3. Functions like once.
4. Async world state maintain.
5. Iterators and memorize.
*/ 