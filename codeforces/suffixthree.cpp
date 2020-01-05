#include<iostream>
#include<string>
//suffix three
//codeforces

int main(){
    int test;
    std::string word,new_word;
    std::cin>>test;
    for(int i=0;i<test;i++){
        std::cin>>word;
        if(word.back() =='o'){
            std::cout<<"FILIPINO";
            std::cout<<std::endl;
        }
        else if(word.back() == 'u'){
            std::cout<<"JAPANESE";
            std::cout<<std::endl;
        }
        else if(word.back() == 'a'){
            std::cout<<"KOREAN";
            std::cout<<std::endl;
        }
    }
    return 0;
}