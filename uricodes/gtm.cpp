#include<iostream>

//uri 1047
int main(){
    int begin_h_time,begin_m_time,end_h_time,end_m_time,tot_hour,tot_min;
    std::cin>>begin_h_time>>begin_m_time>>end_h_time>>end_m_time;
    if(begin_h_time>=10 && end_h_time<10 || begin_h_time == end_h_time || begin_h_time>end_h_time){
        tot_hour = (24-begin_h_time) + end_h_time;
        if(begin_m_time>end_m_time){
            tot_hour-=1;
            tot_min = (60-begin_m_time) + end_m_time;
            std::cout<<"O JOGO DUROU "<<tot_hour<< " HORA(S) E "<<tot_min<<" MINUTO(S)";
            std::cout<<std::endl;
        }
        else{
        tot_min = end_m_time - begin_m_time;
        std::cout<<"O JOGO DUROU "<<tot_hour<< " HORA(S) E "<<tot_min<<" MINUTO(S)";
        std::cout<<std::endl;
        }
    }
    else if(begin_h_time>=10 && end_h_time>10 || begin_h_time<10 && end_h_time<10 || begin_h_time<10 && end_h_time>=10){
        tot_hour= end_h_time - begin_h_time;
        if(begin_m_time>end_m_time){
            tot_hour-=1;
            tot_min = (60-begin_m_time) + end_m_time;
            std::cout<<"O JOGO DUROU "<<tot_hour<< " HORA(S) E "<<tot_min<<" MINUTO(S)";
            std::cout<<std::endl;
        }
        else{
        tot_min = end_m_time - begin_m_time;
        std::cout<<"O JOGO DUROU "<<tot_hour<< " HORA(S) E "<<tot_min<<" MINUTO(S)";
        std::cout<<std::endl;
        }
    }
    return 0;
}