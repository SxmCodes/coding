/* All browsers have their different JS engines, we can make our own JS engine as well by following the ECMAScript language standards.

First JavaScript Engine --> Spider Monkey, made by the person who made javscript himself.

JS Engine is not a machine. It is written in high level languages. V8 is made on C++. 

Inside the javascipt engine, 3 things happens after taking in code.
1) Parsing --> a) Code is broken down into tokens.
               let a = 10;, here everything is broken as tokens.
               b) Syntax Parser --> It's job is to break code into AST. It is Abstract Syntax Tree. 
2) Compilation --> It's an JIT compilation, interpretter will execute your code line by line without knowing what's next. In case of compiler it's compiled even without it's executed. It makes another code which is very optimal. 

Interpretter is fast but compiler is very efficient.
JavaScript can be behave in both manner, interpretter or compiled. 
Now JS engines have both interpretter & compiled.

3) Execution --> We have memory heap and call stack inside the js engine i.e inside the browser. It also have Garbage Collector. It runs on mark and sweep algorithm. 
TODO: Read and learn about mark and sweep algorithm, inlining, copy elision, inline caching. Read blogs about V8 js engine.
Read about Optimizing techniques.
*/
