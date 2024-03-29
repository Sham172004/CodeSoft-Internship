#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        double num1, num2, result;
        char operation;

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        cout << "Choose an operation (+, -, *, /): ";
        cin >> operation;

        switch (operation) {
            case '+':
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;

            case '-':
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;

            case '*':
                result = num1 * num2;
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;

            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed.\n";
                }
                break;

            default:
                cout << "Invalid operation. Please choose +, -, *, or /.\n";
                break;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Calculator program exited.\n";

    return 0;
}

