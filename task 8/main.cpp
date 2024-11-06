#include <iostream>
using namespace std;
int main() {
    double finalAmount = 100.0;
    string couponCode;
    cout << "Enter a coupon code (if any): ";
    cin >> couponCode;
    double couponDiscount = (couponCode == "SAVE10") ? 10.0 : 0.0;
    double totalAfterCoupon = finalAmount - couponDiscount;
    cout << "Total after applying coupon: $" << totalAfterCoupon << std::endl;
    
    return 0;
}