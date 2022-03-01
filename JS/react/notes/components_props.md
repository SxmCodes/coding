# Using props in another file.

```js
function Welcome(props) {
  return <h1>Hello, {props.name}</h1>;
}
```

This is the proper function to print :- Hello, Saksham 😎.

```js
function Welcome(props) {
  return <h1>Hello, {props.name}</h1>;
}

const element = <Welcome name="Sara" />;
ReactDOM.render(element, document.getElementById("root"));
```
