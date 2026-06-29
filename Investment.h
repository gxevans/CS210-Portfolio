#ifndef INVESTMENT_H
#define INVESTMENT_H

class Investment {
private:
    double initialInvestment;
    double monthlyDeposit;
    double annualInterest;
    int numberOfYears;

public:
    Investment(double initial, double monthly, double interest, int years);

    void displayInputData() const;
    void displayReportWithoutDeposits() const;
    void displayReportWithDeposits() const;
};

#endif
