#include <iostream>
using namespace std;

// دالة لحساب العمر
void calculateAge(int birthDay, int birthMonth, int birthYear, 
                  int currentDay, int currentMonth, int currentYear) {
    int ageYears, ageMonths, ageDays;

    // حساب الأيام
    if (currentDay >= birthDay) {
        ageDays = currentDay - birthDay;
    } else {
        currentMonth -= 1;
        currentDay += 30; // نفترض 30 يومًا في الشهر
        ageDays = currentDay - birthDay;
    }

    // حساب الأشهر
    if (currentMonth >= birthMonth) {
        ageMonths = currentMonth - birthMonth;
    } else {
        currentYear -= 1;
        currentMonth += 12;
        ageMonths = currentMonth - birthMonth;
    }

    // حساب السنوات
    ageYears = currentYear - birthYear;

    // عرض النتيجة
    cout << "العمر هو: " << ageYears << " سنة و " 
         << ageMonths << " شهر و " 
         << ageDays << " يوم." << endl;
}

int main() {
    int birthDay, birthMonth, birthYear;
    int currentDay, currentMonth, currentYear;

    // إدخال تاريخ الميلاد
    cout << "أدخل يوم الميلاد: ";
    cin >> birthDay;
    cout << "أدخل شهر الميلاد: ";
    cin >> birthMonth;
    cout << "أدخل سنة الميلاد: ";
    cin >> birthYear;

    // إدخال التاريخ الحالي
    cout << "أدخل اليوم الحالي: ";
    cin >> currentDay;
    cout << "أدخل الشهر الحالي: ";
    cin >> currentMonth;
    cout << "أدخل السنة الحالية: ";
    cin >> currentYear;

    // حساب العمر
    calculateAge(birthDay, birthMonth, birthYear, currentDay, currentMonth, currentYear);

    return 0;
}