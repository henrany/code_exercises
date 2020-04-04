#include<iostream>
#include<cmath>
#include<iomanip>

//uri 1118

int main(){
    double vec[1000],sum=0,average=0;
    int count=0,input,n=1;
    for(int i=0;i<1000;i++){
        std::cin>>vec[i];
        if(vec[i]>0 && vec[i]<=10){
            count++;
            sum+=vec[i];
            if(count==2){
                average = sum/count;
                std::cout << std::fixed << std::showpoint;
                std::cout << std::setprecision(2);
                std::cout<<"media = "<<average;
                std::cout<<std::endl;
                count=0;
                sum=0;
                average=0;
                std::cout<<"novo calculo (1-sim 2-nao)";
                std::cout<<std::endl;
                std::cin>>input;
                for(int j=0;j<n;j++){
                    if(input>2){
                        n++;
                        std::cout<<"novo calculo (1-sim 2-nao)";
                        std::cout<<std::endl;
                        std::cin>>input;
                    }
                }
                if(input==1){
                    continue;
                }
                else if(input==2){
                    break;
                }
            }
        }
        else{
            std::cout<<"nota invalida";
            std::cout<<std::endl;
        }
    }
    return 0;
}