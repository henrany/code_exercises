#include<iostream>

int main(){
    int password,tent_word,count=1;;
    std::cin>>password;
    for(int i=0;i<count;i++){
        std::cin>>tent_word;
        if(password==tent_word){
            std::cout<<"Acesso Permitido";
            std::cout<<std::endl;
            break;
        }
        else{
            count++;
            std::cout<<"Senha Invalida";
            std::cout<<std::endl;
            continue;
        }
    }
    return 0;
}