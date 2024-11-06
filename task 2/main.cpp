#include<iostream>
using namespace std;
int main() {
double priceA=30.0,priceB=20.0,priceC=10.0;
int quantityA, quantityB, quantityC;
cout<<"enter the quantity of product A:";
cin>>quantityA;
cout<<"enter the quantity of product B:";
cin>>quantityB;
cout<<"enter the quantity of product C:";
cin>>quantityC;
double total=(priceA*quantityA)+(priceB*quantityB)+(priceC*quantityC);
double finaltotal=(total>200)?total*0.9:total;
cout<<"total after discount:$"<<finaltotal<<endl;
return 0;
}
