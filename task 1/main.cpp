#include<iostream>
using namespace std;
int main() {
    double priceA=50.5;//price of product A
    double priceB=22.0;//price of product B
    double priceC=10.0;//price of product C
    int quantityA,quantityB,quantityC;
    std::cout<<"enter the quantity of product A:";
    std::cin>>quantityA;
    std::cout<<"enter the quantity of product B:";
    std::cin>>quantityB;
    std::cout<<"enter the quantity of product C:";
    std::cin>>quantityC;
    double total=(priceA*quantityA)+(priceB*quantityB)+(priceC*quantityC);
    std::cout<<"total cost:$"<<total<<std::endl;
    return 0;
}