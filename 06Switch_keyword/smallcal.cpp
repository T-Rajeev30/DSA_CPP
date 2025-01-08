#include <iostream>
using namespace std;

int main() {
    char operation;
    int a, b;

    cout << "Type the operator: + (add), - (sub), * (mul), / (div): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (operation) {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << "Result: " << a / b << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
    }

    return 0;
}
