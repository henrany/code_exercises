#include<iostream>

//uri 1046
int main(){
    int start_time, end_time,time_taken;
    std::cin>>start_time>>end_time;
    if(start_time>=10 && end_time<10 || start_time == end_time || start_time>end_time){
    time_taken = (24-start_time) + end_time;
    }
    else if(start_time>=10 && end_time>10 || start_time<10 && end_time<10 || start_time<10 && end_time>=10){
        time_taken = end_time - start_time;
    }
    std::cout<<"O JOGO DUROU "<<time_taken<<" HORA(S)";
    std::cout<<std::endl;
    return 0;
}