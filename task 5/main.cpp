#include<iostream>
using namespace std;
int main() {
int price1=45;
int price2=67;
int price3=29; 
double quantity1=0;
double quantity2=0;
double quantity3=0;
cout<<"Enter the quantity for ProductA:";
cin>>quantity1;
cout<<"Enter the quantity for ProductB:";
cin>>quantity2;
cout<<"Enter the quantity for ProductC:";
cin>>quantity3;
double total=(price1*quantity1)+(price2*quantity2)+(price3*quantity3);
cout<<"Total:$"<<total<<endl;
double f_total=(total>200)?total*0.9:total;
cout<<"Total after discount:$"<<f_total<<endl;
double totalwithshipping=(f_total<150)?f_total+15.0:f_total;
cout<<"Total after discount and shipping:$"<<totalwithshipping<<endl;
int loyaltypoints=(totalwithshipping>300)?50:20;
cout<<"Loyalty points earned:"<<loyaltypoints<<endl;
return 0;
}
