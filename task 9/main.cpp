#include <iostream>
using namespace std;
int main() {
    double finalAmount = 100.0; 
    int location;
    std::cout << "Enter your location (1, 2, or 3): ";
    std::cin >> location;
    double taxRate = (location == 1) ? 0.05 :      
     (location == 2) ? 0.10 :  0.08;             
    double totalWithTax = finalAmount * (1 + taxRate);
    std::cout << "Total after applying sales tax: $" << totalWithTax << std::endl;
    
    return 0;
}