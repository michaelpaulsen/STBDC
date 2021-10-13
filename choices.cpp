#include "choices.h"

void GoRight(char* action, int& count){
  char** act = &action; 
  count++;
  if(count == 1){
    printf("you choose to go right you see a glimmer of gold.\nYou continue to go down the hall.\nYou reach the end of the hall you see a sea of gold \n you can go through the gold or you can walk around it \n");
    MakeChoice(*act, "Do you walk around the gold (around)or do you go through it (through)", "around", count);
  }
  if(count == 2){ 
    printf("you get around the gold and you see a light.\nAs you run to the light it starts to dim.\nYou get to the end of the hall way you see that there was a door it is now closed.\nYou try to open it but you cannot.\nYou can go back (back) or you can give up ");
    std::cin >> *act;
    MakeChoice(*act, "Do You Go Back (back) or do you stay where you are and die (die)", "back", count);
  }
  if(count == 3){ 
    printf("You decide to go back.\nYou get to the sea of gold you see something moving in the gold.\nYou can hide or you can stay where you are.  ");

  }
  printf("%d", count);
}

void GoLeft(char* action, int& count){ 
  count++;
  if(count == 1){ 
    char** act = &action;
    printf("you go left \n as you continue going down the path that you are going down you start to feel warm \n do you turn back (back) or continue:\n");
    std::cin >> *act;
    MakeChoice(*act, "Do you walk around the gold (around)or do you go through it (through)", "around", count);
  }
  if(count == 2){ 
    printf("you choose to go through the gold it starts to rattle.\n you notice that it is starting to get hot in the room, a dragon appears behind you.\n\t YOU DIE,\t the end "); 
  }
}

void MakeChoice( char* action, const char* prompt, const char* positiveOutCome, int& count ){
  char ** act = &action;
 
  std::cout<<prompt;  
  std::cin >> *act;
  if(compstr(const_cast<char*>(*act),positiveOutCome)){
    GoRight(action,count);
  }else{ 
    GoLeft(action,count);
  }
}