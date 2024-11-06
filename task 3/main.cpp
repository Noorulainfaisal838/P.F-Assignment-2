#include<iostream>
using namespace std;
int main() {
double priceA=50.0,priceB=30.0,priceC=20.0;
int quantityA,quantityB,quantityC;
cout<<"enter the quantity of product A:";
cin>>quantityA;
cout<<"enter the quantity of product B:";
cin>>quantityB;
cout<<"enter the quantity of product c:";
cin>>quantityC;
double total=(priceA * quantityA)+(priceB * quantityB)+(priceC * quantityC);
double finaltotal=(total>200)? 0.9 :total;
double shipping=(finaltotal<150)?15.0:0.0;
cout<<"total after discount and shipping:$"<<finaltotal+shipping<<endl;
return 0;
}