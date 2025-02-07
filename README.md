# Simple Calculator

This project is a command-line-based advanced calculator written in C++. It supports basic arithmetic operations like addition, subtraction, multiplication, division, and modulus. Additionally, it provides some extra functionalities such as square root calculation and power operation.

### Features
- Addition, Subtraction, Multiplication, Division
- Modulus operation
- Square root calculation
- Power operation

### Prerequisites
- A C++ compiler supporting C++11 or higher (e.g., g++, clang++)
- GNU Make (optional, for building using the provided Makefile)

### How to Build and Run

#### Using Makefile
1. Open a terminal and navigate to the directory containing the source files and the Makefile.
2. Build the program by running:
   ```
   make
   ```
3. Run the program by executing:
   ```
   ./calculator
   ```
4. To clean the build files, run:
   ```
   make clean
   ```

#### Manual Compilation
If you don't want to use the Makefile, you can compile the program manually:
```
g++ -o calculator calculator.cpp -lm
```
Then, run the program:
```
./calculator
```

### Usage
1. Run the program.
2. Follow the on-screen instructions to perform calculations.
3. Exit by selecting the "Exit" option in the menu.

### File Structure
- `calculator.cpp`: Source code of the calculator program.
- `Makefile`: Script for building the program.

### Notes
- Ensure proper input when prompted; invalid inputs will trigger re-prompting.
- Division and modulus by zero are handled with error messages.
- Negative numbers are not allowed for square root calculation.

---
