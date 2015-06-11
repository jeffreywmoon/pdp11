#include "Alu.h"

/*
 * 16-bit addition
 * a + b
 */
word
_wordadd(word a, word b)
{
	byte i, c;	
	word ai, bi, s;
	for(i = c = s = 0; i < WORDSIZE; ++i){
		// consider only bits at a_i and b_i
		ai = (1<<i & a);
		bi = (1<<i & b);
		// calculate bit at s_i
		s = s | ((ai ^ bi) ^ (c<<i));
		// calculate carry
		c = (((ai ^ bi) & (c<<i)) | (ai & bi)) >> i;
	}
	
	//TODO: Set PSW carry bit
	//TODO: Set PSW overflow bit
	return s;
}
/*
 * 16-bit subtraction
 * returns a - b
 */
word
_wordsub(word a, word b)
{
	byte i, bor;
	word ai, bi, d;
	
	for(i = d = bor = 0; i < WORDSIZE; ++i){
		// consider only bits at a_i and b_i
		ai = (1<<i & a);
		bi = (1<<i & b);
		
		// calculate d_i bit
		d = d | ((ai ^ bi) ^ bor<<i);
		// calculate borrow
		bor = (((1<<i ^ ai) & bi) | ((1<<i ^ ai) & bor<<i) |
			(bi & bor<<i)) >> i;

	}
	//TODO: Set flags
	return d;
}

