#include <iostream>

using namespace std;

int main() {
    int age;
    char gender;

    // إدخال العمر والنوع
    cout << "Enter the age: ";
    cin >> age;

    cout << " Enter the kind (m للذكر / f للأنثى): ";
    cin >> gender;

    // التحقق من النوع والعمر وطباعة النتيجة
    if (gender == 'm' || gender == 'M') {
        if (age < 20) {
            cout << "boy" << endl;
        } else {
            cout << "man" << endl;
        }
    } else if (gender == 'f' || gender == 'F') {
        if (age < 20) {
            cout << "girl" << endl;
        } else {
            cout << "woman" << endl;
        }
    } else {
        cout << "خطأ: يرجى إدخال النوع بشكل صحيح (m أو f)." << endl;
    }

    return 0;
}