/**
 * Let Bindings
 * In this tutorial, we will introduce three points of 
 * binding. 
 */
// 1. Bindings are Immutable
let x = 10;
/* Error: invalid code! */
/* x = x + 10; */
// 2. Binding Shadowing
let x = 10; // Now x is 10.
let x = x + 10; // Before x is overrided, its value will keep unchanged.So, 
                // it will be 10. And for newX <- oldX + 10, oldX is 10.
                // After that, x will be assigned to 20.
                // There will be another thing you need to know, that is 
                // `constraint fold`.
let x = x + 3;
Js.log(x);
// The same thing as before, x will be 23.
// 2. Block Scope

let message = {
    let part1 = "hello";
    let part2 = "world";
    part1 ++ " " ++ part2;
};
/** `part1` and `part2` not accessible here! */
// The last line of a block is implicitly returned.
