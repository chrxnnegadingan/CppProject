
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    string patientName = "Pedro Reyes";
    int patientAge = 35;
    double consultationFee = 500.00;
    double laboratoryFee = 1200.00;
    double medicineFee = 850.00;
    double discountRate = 0.10;
    double insuranceCoverage = 500.00;

    double totalBill = consultationFee
                     + laboratoryFee
                     + medicineFee;

    double discountAmount = totalBill * discountRate;

    if (patientAge >= 60) {
        discountAmount = totalBill * 0.20;
        cout << "Senior citizen discount applies." << endl;
    }

    double finalBill = totalBill - discountAmount;
    double patientPayment = finalBill - insuranceCoverage;

    if (patientPayment < 0) {
        patientPayment = 0;
    }

    cout << fixed << setprecision(2);
    cout << "Patient: " << patientName << endl;
    cout << "Age: " << patientAge << endl;
    cout << "Consultation Fee: " << consultationFee << endl;
    cout << "Laboratory Fee: " << laboratoryFee << endl;
    cout << "Medicine Fee: " << medicineFee << endl;
    cout << "Total Bill: " << totalBill << endl;
    cout << "Discount: " << discountAmount << endl;
    cout << "Final Bill: " << finalBill << endl;
    cout << "Insurance Coverage: " << insuranceCoverage << endl;
    cout << "Patient Payment: " << patientPayment << endl;

    return 0;
}
