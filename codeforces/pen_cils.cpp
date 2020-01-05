#include<iostream>
#include<cstdlib>
#include<cmath>

int main(){
    int tests;
    int pens,pencil,sum=0,sub1=0,sub2=0;
    int num_lec,num_prac,lec_1_pen,prac_1_pencil,pen_case;
    std::cout<<"enter the number of tests: ";
    std::cin>>tests;
    std::cout<<"enter the values: ";
    while(tests!=0){
        std::cin>>num_lec>>num_prac>>lec_1_pen>>prac_1_pencil>>pen_case;
        sub1= num_lec - lec_1_pen;
        sub2 = num_prac - prac_1_pencil;
        if(sub1 == 0){
            pens = 1;
        }else{
            pens = sub1;
        };
        if(sub2 == 0){
            pencil = 1;
        }else{
            pencil = sub2;
        };
        tests--;
    }

    return 0;
}