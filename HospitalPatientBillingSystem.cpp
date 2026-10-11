
#include <iostream>
#include <string>
using namespace std;

int main() {

    string patientName = "Pedro Reyes";
    int patientAge = 35;
    double consultationFee = 500.00;
    double laboratoryFee = 1200.00;
    double medicineFee = 850.00;
    double discountRate = 0.10;

    // ERROR 1: Missing semicolon at the end of the statement.
    double totalBill = consultationFee + laboratoryFee + medicineFee

    // ERROR 2: The variable discountAmount has not been declared.
    discountAmount = totalBill * discountRate;

    // ERROR 3: The variable finalBill is not declared.
    finalBill = totalBill - discountAmount;

    // ERROR 4: The comparison operator is invalid.
    if (patientAge => 60) {
        cout << "Senior citizen discount applies." << endl;
    }

    // ERROR 5: A string variable cannot be used as a numeric value.
    double additionalCharge = patientName + consultationFee;

    // ERROR 6: The variable insuranceCoverage is undeclared.
    double patientPayment = finalBill - insuranceCoverage;

    // ERROR 7: Incorrect capitalization of the variable name.
    cout << "Total Bill: " << totalbill << endl;

    cout << "Patient: " << patientName << endl;
    cout << "Age: " << patientAge << endl;
    cout << "Consultation Fee: " << consultationFee << endl;
    cout << "Laboratory Fee: " << laboratoryFee << endl;
    cout << "Medicine Fee: " << medicineFee << endl;
    cout << "Discount: " << discountAmount << endl;
    cout << "Final Bill: " << finalBill << endl;
    cout << "Patient Payment: " << patientPayment << endl;

    return 0;
}
