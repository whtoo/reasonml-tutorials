// Strings
let s = "Hello World!";

let s =  "Hello " ++ "World!";
Js.log(s);
let s = String.trim(" extra whitespace\n");
let s = String.concat("\n",["line 1","line 2"]);
let s = String.sub("Hello World!",6,5);
Js.log(s);

// Char
let c = 'a';

let c = "Hello".[1];

let s = String.make(1,'c');

let charArray = [|'H','e','l','l','o'|];

let s = String.init(5,i => charArray[i]);
Js.log(s);
