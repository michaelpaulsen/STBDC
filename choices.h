#pragma once 
#include "functions.h"

void MakeChoice( char* action, const char* prompt, const char* positiveOutCome, int& count );
void GoLeft(char* action, int& count);
void GoRight(char* action, int& count);
