/*                  EVENT LOOP AND CALLBACK QUEUE.
The Call Stack is present in JavaScript Engine and the JavaScript engine is there inside the browser and inside the call stack there are global execution context.

There are many superpowers of browser and to link that superpowers to the global execution context, we need Web APIs. Settimeout and DOM APIs are not the part of JavaScript, console is also not a part of javascript.

Browsers will give Web APIs their super powers by the special keyword, which is Window, we can call it without the word "window" as it is global variable.

If the call stack is empty but we have to call a function then we have to use event loop and callback queue, the function is puted inside the callback queue first after the timer expiration. The function of the event loop is to keep a check on callback queue and put the functions into the call stack. It acts like a gatekeeper.

Q) Why we need a callback queue?
A) If a user presses the button serveral times and it press all the fucking things which are there, they all would be executed one by one and everyone will have a chance to exected.

Fetch function :-
    Goes and request our API call.

MicroTask Queue :-
    It has higher priority than callback queue.

Q) What can come in Microtask Queue?
A) All the call back functions which can come under promises.

Mutation Observer --> Keeps checking if there is any mutation inside the DOM tree or not.

Callback Queue --> All the functions which come from setTimeout or DOM APIs comes in this.

Starvation of Callback Queue --> If the microtask queue is making new microtask selection which makes another selection and so on..., so callback queue will got oppurtunity very very late.
*/
console.log("Start");
setTimeout(function cbT() {
  console.log("CB SetTimeout");
}, 5000);

fetch("https://api.netflix.com").then(function cbF() {
  console.log("CB Netflix.");
});
console.log("End");
