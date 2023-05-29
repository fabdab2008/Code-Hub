//#include <iostream>
//#include <cmath>
#include<bits/stdc++.h>
using namespace std;

namespace Financial {
    namespace Mortgage {
        double monthlyPayment(double P, double r, int n) {
            r = r / 12.0;
            double c = pow(1.0 + r, n) - 1.0;
            return (P * r) / c;
        }
        double totalPayments(double monthly_payment, int n) {
            return monthly_payment * n;
        }
    }
    namespace Retirement {
        double monthlySavings(double P, double r, int n) {
            r = r / 12.0;
            double c = pow(1.0 + r, n) - 1.0;
            return P / ((pow(1.0 + r, n) - 1.0) / r) * c;
        }
        double totalSavings(double monthly_savings, int n) {
            return monthly_savings * n * 12.0;
        }
    }
}

int main() {
    double principal_amount;
    double interest_rate;
    int number_of_periods;

    cout << "Enter the Principal amount,interest rate and number of periods serially: ";
    cin >> principal_amount;
    cout<<"\n";
    cin >> interest_rate;
    cout<<"\n";
    cin >> number_of_periods;


    double monthly_payment = Financial::Mortgage::monthlyPayment(principal_amount, interest_rate, number_of_periods);
    cout << "Payments for mortgage: " << Financial::Mortgage::totalPayments(monthly_payment, number_of_periods) << std::endl;

    double monthly_savings = Financial::Retirement::monthlySavings(principal_amount, interest_rate, number_of_periods);
    cout << "Amount saved for retirement : " << Financial::Retirement::totalSavings(monthly_savings, number_of_periods) << std::endl;

    return 0;
}
