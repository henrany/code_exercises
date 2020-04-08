#include<iostream>


void prime(int num){
    int count=0;
    for(int i=2;i<=num;i++){
        if(num/i>=1 && num%i==0){
            count++;
        }
    }

    if(count==1){
        std::cout<<"it's prime"<<std::endl;
    }
    else{
        std::cout<<"it's not prime"<<std::endl;
    }
}

int main(){
    int num,test;
    std::cin>>test;
    while(test--){
        std::cin>>num;
        prime(num);
    }
    return 0;
}