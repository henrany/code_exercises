#include<iostream>

int main(){
    int x,z;
    int count=1,temp,incre=0,sum=0;
    std::cin>>x;
    for(int i=0;i<count;i++){
        std::cin>>z;
        if(z<=x){
            count++;
            continue;
        }
        else{
            temp=z;
            break;
        }
    }
    while(sum<temp){
        sum=sum+x+1;
        incre++;
    }
    std::cout<<incre;
    std::cout<<std::endl;
    return 0;
}