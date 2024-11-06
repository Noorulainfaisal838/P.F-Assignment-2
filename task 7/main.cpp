#include <iostream>
using namespace std;

int main() {
    double priceA = 50.0, priceB = 30.0, priceC = 20.0;
    int quantityA, quantityB, quantityC;
    int paymentMethod;
    
    cout << "Enter quantity for Product A: ";
    cin >> quantityA;
    cout << "Enter quantity for Product B: ";
    cin >> quantityB;
    cout << "Enter quantity for Product C: ";
    cin >> quantityC;
    double totalWithShipping = (priceA * quantityA) + (priceB * quantityB) + (priceC * quantityC);

    cout << "Select a payment method (1 for Credit Card, 2 for PayPal, 3 for Cash): ";
    cin >> paymentMethod;
    double transactionFee = (paymentMethod == 1) ? totalWithShipping * 0.02 :
  (paymentMethod == 2) ? totalWithShipping * 0.03 :0.0;
                            

    double totalAfterPayment = totalWithShipping + transactionFee;
    int customerType;
    cout << "Enter customer type (1 for Regular, 2 for VIP): ";
    cin >> customerType;
    double finalAmount = (customerType == 2) ? totalAfterPayment * 0.95 : totalAfterPayment;
    cout << "Total after applying transaction and customer discounts: $" << finalAmount << endl;

    return 0;
}