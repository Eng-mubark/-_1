#include <iostream>

using namespace std;

int main() {
    int password = 1234;  // كلمة المرور الصحيحة
    int enteredPassword;
    double balance = 5000.0;  // الرصيد المبدئي
    int choice;
    double amount;

    // التحقق من كلمة المرور
    cout << "Enter your password: ";
    cin >> enteredPassword;

    if (enteredPassword == password) {
        cout << "Login successful!\n";

        do {
            // عرض قائمة الخيارات
            cout << "\nATM Menu:\n";
            cout << "1. Check balance\n";
            cout << "2. Withdraw money\n";
            cout << "3. Deposit money\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Your current balance: $" << balance << endl;
                    break;

                case 2:
                    cout << "Enter the amount to withdraw: ";
                    cin >> amount;
                    if (amount > balance) {
                        cout << "Insufficient balance!\n";
                    } else {
                        balance -= amount;
                        cout << "Withdrawal successful! Your new balance: $" << balance << endl;
                    }
                    break;

                case 3:
                    cout << "Enter the amount to deposit: ";
                    cin >> amount;
                    if (amount > 0) {
                        balance += amount;
                        cout << "Deposit successful! Your new balance: $" << balance << endl;
                    } else {
                        cout << "Invalid deposit amount!\n";
                    }
                    break;

                case 4:
                    cout << "Thank you for using this system!\n";
                    break;

                default:
                    cout << "Invalid choice! Please try again.\n";
            }
        } while (choice != 4);
        
    } else {
        cout << "Incorrect password!\n";
    }

    return 0;
}