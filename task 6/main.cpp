#include <iostream>
using namespace std;
int main() {
    double priceA = 50.0, priceB = 30.0, priceC = 20.0;
    int quantityA, quantityB, quantityC;
    int paymentMethod;
    
    cout << "Select a payment method (1 for Credit Card, 2 for PayPal, 3 for Cash): ";
    cin >> paymentMethod;
    
    double totalWithShipping = 0; 
    double transactionFee = 0;
    double totalAfterPayment = 0;  
    
    transactionFee = (paymentMethod == 1) ? totalWithShipping * 0.02 :
    (paymentMethod == 2) ? totalWithShipping * 0.03 : 0.0;
    totalAfterPayment = totalWithShipping + transactionFee;
    cout << "Total after applying transaction fee: $" << totalAfterPayment << endl;
    return 0;
}