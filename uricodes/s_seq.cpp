#include<iostream>
#include<iomanip>

int main(){
    double sum=0;
    for(double i=1;i<100;i++){
        sum+=(1/i);
    }
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);
    std::cout<<sum;
    std::cout<<std::endl;
    return 0;
}