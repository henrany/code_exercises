#include<iostream>

int main(){
    int a,b,q,r;
    std::cin>>a>>b;
    q = a/b;
    r = a%b;
    if(r<0){
        if(q>0){
            q++;
        }
        if(q<0){
            q--;
            r = a-(b*q);
        }
    }
    std::cout<<q<<" "<<r<<std::endl;
    return 0;
}