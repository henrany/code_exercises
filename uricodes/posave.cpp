#include<iostream>
#include<cmath>
//uri 1061

int main(){
    float vec[6],count=0,ave=0,sum=0;
    for(int i=0;i<6;i++){
        std::cin>>vec[i];
    }

    for(int i=0;i<6;i++){
        if(vec[i]>0){
            count++;
            sum+=vec[i];
        }
    }
    ave=sum/count;
    std::cout<<count<<std::endl;
    std::cout<<ave<<"\n";
    std::cout<<std::endl;
    return 0;
}
