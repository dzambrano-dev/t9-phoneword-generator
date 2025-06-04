# T9 Phone Word Generator (C++)

This C++ program takes a 7-digit phone number (using digits 2–9 only) and generates all possible letter combinations based on the T9 predictive text system used on classic mobile phones.

## Features

- Validates user input to ensure digits are between 2 and 9
- Maps digits to letters using the standard T9 layout
- Uses nested loops to generate every possible word combination
- Outputs results in rows with nine words per line for readability

## Example Output

Enter a valid 7-digit phone number (digits 2–9 only, no 0 or 1)
In the form: xxx-xxxx: 2345678

ADGJMPT ADGJMPU ADGJMPV ... (its very long LOL)


## How to Run

1. Compile:
g++ -std=c++11 t9_phoneword_generator.cpp -o t9

markdown
Copy code

2. Run:
./t9

## File

- `t9_phoneword_generator.cpp` – handles input validation, T9 mapping, and word generation logic

## Author

Daniel Zambrano  
Github: dzambrano-dev
Instagram: dzambrano.dev

##License
MIT License
