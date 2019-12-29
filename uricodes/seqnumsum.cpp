#include<iostream>
#include<cmath>
//uri 1101

int main(){
    int num1,num2,count=1;
    for(int i=0;i<=count;i++){
        std::cin>>num1>>num2;
        int sum=0;
        if(num1>0 && num2>0){
            count++;
            if(num1>num2){
                for(int i=num2;i<=num1;i++){
                    sum+=i;
                    std::cout<<i<<" ";
                    //std::cout<<std::endl;
                }
                std::cout<<"sum="<<sum;
                std::cout<<std::endl;
            }
            else{
              for(int i=num1;i<=num2;i++){
                    sum+=i;
                    std::cout<<i<<" "<<std::endl;
                }
                std::cout<<"sum="<<sum;
                std::cout<<std::endl;
            }
        }
        else{
            break;
        }
    }
    return 0;
}