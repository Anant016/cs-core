
## JavaScript

1. **Event delegation** refers to the process of using event propagation **(bubbling)** to handle events at a higher level in the DOM than the element on which the event originated. It allows us to attach a single event listener for elements that exist now or in the future.

2. An **IIFE** (Immediately Invoked Function Expression)
```javascript
(function() {})();
```
3. **Function Declarations vs. Function Expressions**
Function declarations load before any code is executed 
while Function expressions load only when the interpreter reaches that line of code.
ex 
```javascript
function bar() {return 3;} //dec
var x = function (a, b) {return a * b;} //expression
```
Function declaration are hoisted.
Function expressions, however are not hoisted.

4, **Hoisting**
Hoisting is a JavaScript mechanism where variables and function declarations are moved to the top of their scope before code execution.
Inevitably, this means that no matter where functions and variables are declared, they are moved to the top of their scope regardless of whether their scope is global or local.

ex 1- 
```javascript
function hoist() {
  a = 20;
  var b = 100;
}

hoist();

console.log(a); 
/* 
Accessible as a global variable outside hoist() function
Output: 20
*/

console.log(b); 
/*
Since it was declared, it is confined to the hoist() function scope.
We can't print it out outside the confines of the hoist() function.
Output: ReferenceError: b is not defined
*/
```

ex 2 - 
```javascript
console.log(hoist); // Output: undefined
var hoist = 'The variable has been hoisted.';

//We expected the result of the log to be: ReferenceError: hoist is not defined, but instead, its output is undefined.
```

5. **'use strict'** - ES5
By enabling strict mode, we opt into a restricted variant of JavaScript that will not tolerate the usage of variables before they are declared.

6. ES6 - let, const, classes
Gives Reference Error - Ensures to define before

7. **Order of Precedence**
Function declarations are hoisted over variable declarations but not over variable assignments.
ex1
```javascript
var double = 22;

function double(num) {
  return (num*2);
}

console.log(typeof double); // Output: number
```
ex2-
```javascript
var double;

function double(num) {
  return (num*2);
}

console.log(typeof double); // Output: function
```
