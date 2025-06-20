#include <iostream>
const double PI = 3.14;
int main(){
    double r;
    std::cout<<"Enter the radius: ";
    std::cin>>r;
    std::cout<<"The radius is: ";
    double c = 2*r*PI;
    std::cout<<"circumfurence is: "<<c;
    return 0;
}