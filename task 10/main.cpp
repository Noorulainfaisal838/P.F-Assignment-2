#include <iostream>
using namespace std;
int main() {

    string productA = "Product A";
    string productB = "Product B";
    string productC = "Product C";

    double priceA = 10.0;  
    double priceB = 15.0;  
    double priceC = 20.0; 

    int quantityA = 2;     
    int quantityB = 1;     
    int quantityC = 3;     

    double couponDiscount = 10.0;  
    double shipping = 5.0;         
    double transactionFee = 2.0;   
    double salesTaxRate = 0.08;    

    double subtotal = (priceA * quantityA) + (priceB * quantityB) + (priceC * quantityC);
    
    double totalAfterCoupon = subtotal - couponDiscount;

    double salesTax = totalAfterCoupon * salesTaxRate;
    double totalWithTax = totalAfterCoupon + salesTax + shipping + transactionFee;

    cout << "Order Summary:\n";
    cout << productA << " (x" << quantityA << "): $" << priceA * quantityA << endl;
    cout << productB << " (x" << quantityB << "): $" << priceB * quantityB << endl;
    cout << productC << " (x" << quantityC << "): $" << priceC * quantityC << endl;
    
    cout << "\nSubtotal: $" << subtotal << endl;
    cout << "Discount Applied: -$" << couponDiscount <<endl;
    cout << "Shipping: $" << shipping << endl;
    cout << "Transaction Fee: $" << transactionFee << endl;
    cout << "Coupon Discount: -$" << couponDiscount << endl;
     cout << "Sales Tax: $" << salesTax << std::endl;
    cout << "Total Amount to Pay: $" << totalWithTax << endl;

    return 0;
}