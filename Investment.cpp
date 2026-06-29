#include "Investment.h"
#include <iostream>
#include <iomanip>

using namespace std;

Investment::Investment(double initial, double monthly, double interest, int years) {
    initialInvestment = initial;
    monthlyDeposit = monthly;
    annualInterest = interest;
    numberOfYears = years;
}

void Investment::displayInputData() const {
    cout << "Initial Investment Amount: $" << initialInvestment << endl;
    cout << "Monthly Deposit: $" << monthlyDeposit << endl;
    cout << "Annual Interest: " << annualInterest << "%" << endl;
    cout << "Number of Years: " << numberOfYears << endl;
}

void Investment::displayReportWithoutDeposits() const {
    double balance = initialInvestment;

    for (int year = 1; year <= numberOfYears; year++) {
        double interestEarned = 0;

        for (int month = 0; month < 12; month++) {
            double monthlyInterest = balance * ((annualInterest / 100) / 12);
            interestEarned += monthlyInterest;
            balance += monthlyInterest;
        }

        cout << year << " " << fixed << setprecision(2)
             << balance << " " << interestEarned << endl;
    }
}

void Investment::displayReportWithDeposits() const {
    double balance = initialInvestment;

    for (int year = 1; year <= numberOfYears; year++) {
        double interestEarned = 0;

        for (int month = 0; month < 12; month++) {
            balance += monthlyDeposit;
            double monthlyInterest = balance * ((annualInterest / 100) / 12);
            interestEarned += monthlyInterest;
            balance += monthlyInterest;
        }

        cout << year << " " << fixed << setprecision(2)
             << balance << " " << interestEarned << endl;
    }
}
