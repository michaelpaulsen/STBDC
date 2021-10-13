#include <iomanip>
#include <cstring> 
#include <memory.h> 
#include <cstdio>
#include <stdlib.h>
#include "functions.h"

bool compstr (const char* cStr1, const char* cStr2){  
 std::size_t sp = sizeof(cStr1); 
 return (!std::strncmp(cStr1, cStr2, sp));
}