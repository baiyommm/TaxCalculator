#include <iostream>
using namespace std;

int main() {
    
    // Variables
    double revenue = 95000.0;      // Revenue
    double stateTaxRate = 0.04;    // State Tax Rate (4%)
    double countyTaxRate = 0.02;   // County Tax Rate (2%)
    
    // Calculate Taxes
    double stateTax = revenue * stateTaxRate;   // Calculate state tax
    double countyTax = revenue * countyTaxRate; // Calculate county tax
    double totalTax = stateTax + countyTax;     // Total tax is the sum of state and county tax

    return 0;
}
