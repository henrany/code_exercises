#include<iostream>
#include"ufo_functions.hpp"

int main(){
  std::string codeword,answer = "";
  codeword = "henry";
  for(int i=0;i<codeword.size();i++){
      answer+='-';
  }
  int misses = 0;
  greet();

  std::vector<char> incorrect;
  bool guess = false;
  char letter;

  while(answer != codeword && misses < 7){
    display_misses(misses);
    display_status(answer,incorrect);
    std::cout<<"\nPlease enter your guess: ";
    std::cin>>letter;

  for(int i=0;i < codeword.size();i++){
    if(letter == codeword[i]){
      answer[i] = letter;
      guess = true;
    }
  }
  
  if(guess){
    std::cout<<"Correct!\n";
  }
  else{
    std::cout<<"Incorrect! The tractor beam pulls the person in further.\n";
    incorrect.push_back(letter);
    misses++;
  }
  guess = false;
  }

  end_game(answer,codeword);
}
