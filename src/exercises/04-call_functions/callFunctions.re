/* Here are some example functions: */
let square = x => x * x;

let half = x => x / 2;

let add = (x, y) => x + y;

/* You can order function invocations with parentheses or let bindings */
/* Parens */
let () = Js.log("(5^2)/2 = " ++ (5 |> square |> half |> string_of_int));

/* Let bindings */
let () = {
  let squared = square(5);
  let halved = half(squared);
  let toString = string_of_int(halved);
  Js.log("(5^2)/2 = " ++ toString);
};

/* Try to write [average] by reusing [add] and [half] */
let average = (x, y) => add(x, y) |> half;

Test.runAll([(average(5, 5) == 5, "average"), (average(50, 100) == 75, "average")]);