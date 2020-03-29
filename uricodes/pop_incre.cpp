#include<iostream>
#include<cmath>

int main(){
    int t;
    std::cin>>t;
    int pa,pb,count;
    double ga,gb;
    for(int i=0;i<t;i++){
        std::cin>>pa>>pb>>ga>>gb;
        count =0;
        
        while(pa<=pb){
            pa+=(pa*ga)/100;
            pb+=(pb*gb)/100;
            count++;
        }
        if(count<=100){
        std::cout<<count<<" anos"<<std::endl;
        }
        else{
            std::cout<<"Mais de 1 seculo."<<std::endl;
        }
    }
    return 0;
}