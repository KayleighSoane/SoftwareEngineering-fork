#include <stdio.h>
#include "../../comp1000/comp1000utils.h"

int main()
{
	//Read the terminal input
	unsigned char c = 0b10101100;
	displayAndCompare(c);

	//Shift left 56 bits and store in a 64bit variable
	//
	//We expect the output to be 0b10101100 00000000 00000000 00000000 00000000 00000000 00000000 00000000
	unsigned long long x = (unsigned long long)c << 56;
	displayAndCompare(x);

	//Solution is in the lab notes

	//This also needs fixing
	int p = 123;
	int q = 2;
	double y = (double)p / (double)q;
	printf("y = %f\n", y);

	//kayl's note: typecasting is changing the data type of a variable to something
	//other than what it is stated as. as above, int p and q are changed to float by inserting (double).
	//they still exist as int in the rest of the code.
}
