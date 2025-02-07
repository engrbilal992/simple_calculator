#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double modulus(double a, double b);
double power(double base, double exponent);
double squareRoot(double num);
void displayMenu();
void clearInputBuffer();

int main() {
    int choice;
    double num1, num2, result;
    char continueCalculation = 'y';

    cout << "===== Advanced Calculator =====" << endl;

    do {
        displayMenu();
        cout << "Enter your choice (1-8): ";
        cin >> choice;

        // Input validation
        while (cin.fail() || choice < 1 || choice > 8) {
            clearInputBuffer();
            cout << "Invalid input! Please enter a number between 1 and 8: ";
            cin >> choice;
        }

        if (choice != 7 && choice != 8) {
            cout << "Enter first number: ";
            while (!(cin >> num1)) {
                clearInputBuffer();
                cout << "Invalid input! Enter a valid number: ";
            }

            if (choice != 6) {  // Square root only needs one number
                cout << "Enter second number: ";
                while (!(cin >> num2)) {
                    clearInputBuffer();
                    cout << "Invalid input! Enter a valid number: ";
                }
            }
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                break;
            case 2:
                result = subtract(num1, num2);
                break;
            case 3:
                result = multiply(num1, num2);
                break;
            case 4:
                if (num2 == 0) {
                    cout << "Error! Division by zero!" << endl;
                    continue;
                }
                result = divide(num1, num2);
                break;
            case 5:
                if (num2 == 0) {
                    cout << "Error! Modulus by zero!" << endl;
                    continue;
                }
                result = ::modulus(num1, num2);
                break;
            case 6:
                if (num1 < 0) {
                    cout << "Error! Square root of negative number!" << endl;
                    continue;
                }
                result = squareRoot(num1);
                break;
            case 7:
                cout << "Enter base: ";
                cin >> num1;
                cout << "Enter exponent: ";
                cin >> num2;
                result = power(num1, num2);
                break;
            case 8:
                cout << "Exiting calculator..." << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
                continue;
        }

        cout << "Result: " << result << endl;
        
        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> continueCalculation;
        clearInputBuffer();

    } while (continueCalculation == 'y' || continueCalculation == 'Y');

    cout << "Exiting calculator. Goodbye!" << endl;
    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

double modulus(double a, double b) {
    return fmod(a, b);
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double squareRoot(double num) {
    return sqrt(num);
}

void displayMenu() {
    cout << "\nAvailable Operations:\n"
         << "1. Addition\n"
         << "2. Subtraction\n"
         << "3. Multiplication\n"
         << "4. Division\n"
         << "5. Modulus\n"
         << "6. Square Root\n"
         << "7. Power\n"
         << "8. Exit\n";
}

void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
