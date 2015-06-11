#ifndef ALU_H_
#define ALU_H_

#define WORDSIZE 16
#define BYTESIZE 8
#define ALUCARRYBIT 0
#define ALUBORROWBIT 1

typedef unsigned char byte;
typedef unsigned short word;

// Alu Status word. Used for managing carry/borrow
// during intermediate adder/subber operations

word _wordadd(word a, word b);
word _wordsub(word a, word b);
#endif
