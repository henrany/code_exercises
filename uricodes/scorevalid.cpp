#include<iostream>
#include<cmath>
#include<iomanip>

//uri 1117

int main(){
    double vec[100],sum=0,average=0;
    int count=0;
    for(int i=0;i<100;i++){
        std::cin>>vec[i];
        if(vec[i]>0 && vec[i]<=10){
            count++;
            sum+=vec[i];
            if(count==2){
                break;
            }
        }
        else{
            std::cout<<"nota invalida";
            std::cout<<std::endl;
        }
    }
    average = sum/count;
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);
    std::cout<<"media = "<<average;
    std::cout<<std::endl;
    //std::cout<<sum<<std::endl;
}