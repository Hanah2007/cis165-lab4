# CIS-165 Lab 4 — C++ Averages and Ocean-Level Projections

## Programs

This lab contains two C++ programs:

* `average.cpp` calculates the sum and average of five assigned values.
* `ocean_levels.cpp` calculates the projected ocean-level increase after 5, 7, and 10 years.

## Program Plans

### average.cpp

* Store the five assigned values in five separate `double` variables.
* Add the five values and store the result in `sum`.
* Divide `sum` by 5 and store the result in `average`.
* Display the sum and average with clear labels.

### ocean_levels.cpp

* Store the annual rise of 1.5 mm/year in the named constant `ANNUAL_RATE`.
* Store 5, 7, and 10 years in separate variables.
* Calculate the increase for each number of years and store each result in a separate variable.
* Display each result with a clear label and the unit mm.

## Testing

| Program/Test                     | Values Used                 | Expected Results          | Actual Results            | Match or Correction |
| -------------------------------- | --------------------------- | ------------------------- | ------------------------- | ------------------- |
| average.cpp — assigned values    | 28, 32, 37, 24, 33          | Sum = 154; Average = 30.8 | Sum = 154; Average = 30.8 | Match               |
| average.cpp — changed test       | 10, 11, 12, 13, 15          | Sum = 61; Average = 12.2  | Sum = 61; Average = 12.2  | Match               |
| ocean_levels.cpp — assigned rate | 1.5 mm/year; 5, 7, 10 years | 7.5 mm; 10.5 mm; 15 mm    | 7.5 mm; 10.5 mm; 15 mm    | Match               |
| ocean_levels.cpp — changed rate  | 2.4 mm/year; 5, 7, 10 years | 12 mm; 16.8 mm; 24 mm     | 12 mm; 16.8 mm; 24 mm     | Match               |

The temporary test values were restored before the final run. The final versions use the assigned values and annual rate from the lab instructions.

## Explanation

The five values and their average use `double` because `double` can store decimal values. An average does not always produce a whole number, so using `double` prevents the decimal part from being lost.

For `average.cpp`, the five assigned values are 28, 32, 37, 24, and 33. These are added together and stored in `sum`, giving 154. Then `sum` is divided by 5 and stored in `average`, giving 30.8.

The completed sum is divided by 5 because an average is the total of all the values divided by the number of values. Dividing only the final value would not calculate the average of all five values.

For `ocean_levels.cpp`, the annual rate is 1.5 mm per year. The program multiplies this rate by the number of years. For example, after 5 years, `1.5 × 5 = 7.5` mm.

`ANNUAL_RATE` is a good named constant because the annual rate is a fixed value required by the assignment and should not change during the program.

The calculations are stored in variables before being displayed because this makes the code easier to read, test, and understand.

## How to Compile and Run

Using a C++ compiler with C++17 support:

```text
g++ -std=c++17 -Wall -Wextra average.cpp -o average
./average

g++ -std=c++17 -Wall -Wextra ocean_levels.cpp -o ocean_levels
./ocean_levels
```

Both programs have their own `main()` function and should be compiled and run separately.

The programs were written and tested using OnlineGDB.
