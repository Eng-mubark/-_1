#include <iostream>
using namespace std;

int main() {
    double a, b;
    char operation;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter processes(+, -, *, /): ";
    cin >> operation;

     if (operation == '+')
        cout << "The resulting: " << (a + b) << endl;
    else if (operation == '-')
        cout << "The resulting: " << (a - b) << endl;
    else if (operation == '*')
        cout << "The resulting: " << (a * b) << endl;
    else if (operation == '/') {
        if (b == 0)
            cout << "Error:( Divided on non-ID 0 )" << endl;
        else
            cout << "The resulting: " << (a / b) << endl;
    } else
          cout << "The process is incorrect " << endl;

    return 0;
    
    
    
    
}