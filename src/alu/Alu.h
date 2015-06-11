#ifndef ALU_H_
#define ALU_H_
// include globals
#include "../Globals.h"

// define bit locations
#define ALUCARRYBIT 0
#define ALUBORROWBIT 1

word _wordadd(word a, word b);
word _wordsub(word a, word b);

#endif
