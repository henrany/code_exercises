#include<iostream>
#include<string>

int main(){
    int t;
    std::cin>>t;
    std::string word,aux;
    while(t--){
        int count=0,pos1=0,pos2=0;
        std::cin>>word;
        for(int i=0;i<word.length();i++){
            if(word[i]=='1'){
                pos1=i;
                break;
            }
        }
        
        pos2=word.find_last_of('1');

        for(int i=pos1;i<pos2;i++){
            if(word[i]=='0'){
                count++;
            }
            else{
                aux+='1';
            }
        }
        std::cout<<count<<std::endl;
    }
    return 0;
}