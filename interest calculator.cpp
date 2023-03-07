#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double rate, n, l; 
    string fname, lname;

    cout << "Enter your first name: ";
    cin >> fname;
    cout << "Enter your Last name: ";
    cin >> lname;
    cout << "Enter the loan amount: $";
    cin >> l;
    cout << "Enter the annual interest rate (without %) ";
    cin >> rate;
    cout << "Enter the number of payments: ";
    cin >> n;
    
    rate /= 1200;

    double payment = (rate * l) / (1 - pow(1 + rate, -n));
    double total = payment * n;

    double interest = total - l;
    
    // Display report
    cout << fixed << setprecision(2);
    cout << "Loan amount: $" << l << endl;
    cout << "Monthly Interest Rate: " << rate * 100 << "%" << endl;
    cout << "Number of Payments: " << n << endl;
    cout << "Monthly Payment: $" << payment << endl;
    cout << "Amount Paid Back: $" << total << endl;
    cout << "Interest Paid: $" << interest << endl;
    cout << fname << " " << lname << " paid a total interest in the amount of $" << interest << " in " << n << " months." << endl;
    
    return 0;
}





