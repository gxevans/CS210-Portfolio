// Airgead Banking App
// Student: Gabriel Evans

#include "Investment.h"
#include <iostream>

using namespace std;

int main() {
    double initialInvestment;
    double monthlyDeposit;
    double annualInterest;
    int years;

    cout << "AIRGEAD BANKING APP" << endl;

    cout << "Initial Investment Amount: ";
    cin >> initialInvestment;

    cout << "Monthly Deposit: ";
    cin >> monthlyDeposit;

    cout << "Annual Interest (%): ";
    cin >> annualInterest;

    cout << "Number of Years: ";
    cin >> years;

    Investment investment(initialInvestment, monthlyDeposit,
                          annualInterest, years);

    investment.displayReportWithoutDeposits();
    investment.displayReportWithDeposits();

    return 0;
}
