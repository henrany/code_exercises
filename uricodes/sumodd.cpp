#include<iostream>
#include<cmath>

int main(){
    int num1,num2,sum=0;
    std::cin>>num1>>num2;
    for(int i=num2;i<num1;i++){
        if(i%2!=0){
           if(i>0){
                sum+=i;
           }
        }
    }
    std::cout<<sum;
    std::cout<<std::endl;
    return 0;
}