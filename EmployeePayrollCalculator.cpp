
#include <iostream>
#include <string>
using namespace std;

int main() {

    string employeeName = "Pedro Reyes";
    double dailyRate = 650.50;
    int daysWorked = 22;
    double taxRate = 0.10;

    // ERROR 1: Missing semicolon.
    double grossSalary = dailyRate * daysWorked

    // ERROR 2: taxAmount has not been declared.
    taxAmount = grossSalary * taxRate;

    // ERROR 3: netSalary is declared as a string,
    // but the expression produces a numeric result.
    string netSalary = grossSalary - taxAmount;

    // ERROR 4: The variable overtimePay is undeclared.
    double totalSalary = netSalary + overtimePay;

    // ERROR 5: The variable grosssalary uses incorrect
    // capitalization; C++ is case-sensitive.
    cout << "Gross Salary: " << grosssalary << endl;

    cout << "Employee: " << employeeName << endl;
    cout << "Net Salary: " << netSalary << endl;
    cout << "Total Salary: " << totalSalary << endl;

    return 0;
}
