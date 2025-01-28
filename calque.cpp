#include <iostream>
using namespace std;

namespace arithmetic {
    
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double divide(int a, int b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return static_cast<double>(a) / b;
    }

    int modulus(int a, int b) {
        if (b == 0) {
            cout << "Error: Modulus by zero!" << endl;
            return 0;
        }
        return a % b;
    }
}

int main() {
    int choice, num1, num2;
    char cont;

    do {
        // Displaying the menu
        cout << "MENU" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Modulus" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

       
        cout << "Enter your two numbers: ";
        cin >> num1 >> num2;

        
        switch (choice) {
            case 1:
                cout << "Result: " << arithmetic::add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << arithmetic::subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << arithmetic::multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Result: " << arithmetic::divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Result: " << arithmetic::modulus(num1, num2) << endl;
                break;
            default:
                cout << "Invalid choice! Please select a number from 1 to 5." << endl;
        }

       
        cout << "Continue? (y/n): ";
        cin >> cont;
    } while (cont == 'y' || cont == 'Y');

    cout << "Program terminated." << endl;
    return 0;
}
