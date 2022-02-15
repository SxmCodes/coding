# Introduction to JSX.

1. In the example below, we declare a variable called name and then use it inside JSX by wrapping it in curly braces 🛩

```js
const name = "Josh Perez";
const element = <h1>Hello, {name}</h1>;

ReactDOM.render(element, document.getElementById("root"));
```

2. After compilation, JSX expressions become regular JavaScript function calls and evaluate to JavaScript objects 😎

```js
function getGreeting(user) {
  if (user) {
    return <h1>Hello, {formatName(user)}!</h1>;
  }
  return <h1>Hello, Stranger.</h1>;
}
```

3. You can put any valid JavaScript expression inside the curly braces in JSX.

```js
function formatName(user) {
  return user.firstName + " " + user.lastName;
}

const user = {
  firstName: "Naruto",
  lastName: "Uzumaki",
};

const element = <h1>Hello, {formatName(user)}!</h1>;

ReactDOM.render(element, document.getElementById("root"));
```

4. ### JSX Prevents Injection Attacks

**It is safe to embed user input in JSX:**

```js
const title = response.potentiallyMaliciousInput;
// This is safe:
const element = <h1>{title}</h1>;
```

By default, **React DOM escapes any values embedded in JSX before rendering them.** Thus it ensures that **you can never inject anything that’s not explicitly written in your application. Everything is converted to a string before being rendered. This helps prevent XSS (cross-site-scripting) attacks 😏**

5. ### JSX Represents Objects
   **Babel compiles JSX down to React.createElement() calls.**

These two examples are identical:

```js
const element = (

  <h1 className="greeting">
    Hello, world!
  </h1>
);
const element = React.createElement(
  'h1',
  {className: 'greeting'},
  'Hello, world!'
);
React.createElement() performs a few checks to help you write bug-free code but essentially it creates an object like this:

// Note: this structure is simplified
const element = {
type: 'h1',
props: {
className: 'greeting',
children: 'Hello, world!'
}
};
```

These objects are called **“React elements”**. You can think of them as descriptions of what you want to see on the screen. React reads these objects and uses them to construct the DOM and keep it up to date 😎
