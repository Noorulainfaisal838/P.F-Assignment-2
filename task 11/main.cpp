#include <iostream>
using namespace std;
int main() {
  string productA = "Product A";
  string productB = "Product B";
  string productC = "Product C";
    
    double priceA = 10.0;  
    double priceB = 15.0;  
    double priceC = 20.0;
    

    int stockA = 10; 
    int stockB = 5;   
    int stockC = 8;  
    
    int quantityA, quantityB, quantityC;

    cout << "Enter quantity for " << productA << " (Available: " << stockA << "): ";
    cin >> quantityA;
    
    if (quantityA > stockA) {
        cout << "Sorry, only " << stockA << " units of " << productA << " are available.\n";
        quantityA = stockA; 
    }
    
    cout << "Enter quantity for " << productB << " (Available: " << stockB << "): ";
    cin >> quantityB;
    
    if (quantityB > stockB) {
        cout << "Sorry, only " << stockB << " units of " << productB << " are available.\n";
        quantityB = stockB;  
    }
    
    cout << "Enter quantity for " << productC << " (Available: " << stockC << "): ";
    cin >> quantityC;
    
    if (quantityC > stockC) {
    cout << "Sorry, only " << stockC << " units of " << productC << " are available.\n";
        quantityC = stockC; 
    }

    double subtotal = (priceA * quantityA) + (priceB * quantityB) + (priceC * quantityC);
    double discount = (subtotal > 50) ? subtotal * 0.10 : 0.0;
    double totalAfterDiscount = subtotal - discount;
    double shippingFee = (totalAfterDiscount > 100) ? 0.0 : 10.0;

    
    double taxRate = 0.08;
    double salesTax = totalAfterDiscount * taxRate;


    double finalTotal = totalAfterDiscount + salesTax + shippingFee;
    int loyaltyPoints = static_cast<int>(finalTotal / 5);
    
    cout << "\nOrder Summary:\n";
    cout << productA << " (x" << quantityA << "): $" << priceA * quantityA << endl;
    cout << productB << " (x" << quantityB << "): $" << priceB * quantityB << endl;
    cout << productC << " (x" << quantityC << "): $" << priceC * quantityC << endl;

    cout << "\nSubtotal: $" << subtotal << endl;
    cout << "Discount Applied: -$" << discount << endl;
    cout << "Shipping Fee: $" << shippingFee << endl;
    cout << "Sales Tax: $" << salesTax << std::endl;
   cout << "Total Amount to Pay: $" << finalTotal << endl;
    cout << "Loyalty Points Earned: " << loyaltyPoints << " points" << endl;

    return 0;
}
