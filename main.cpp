#include "choices.h"
#define STR_SIZE  10
#define MAX_CHOICE_LAYER 3


int main() {
  char* action = static_cast<char*>(calloc(0,STR_SIZE*sizeof(char)));
  int count = 0; 
  printf("you see a room with a hallway you can go left or right \n\t");
  std::cin>>action;
  if(compstr(const_cast<char*>(action),"left") ){
    GoLeft(action, count);
  }else{ 
    GoRight(action, count); 
  }     
}