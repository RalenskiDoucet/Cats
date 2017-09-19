#include <iostream>
#include "Cats.h"
int main()
{
	Cat catArray[26];
	char i = 65;
	char j = 0;
	do {
		catArray[j].NameMe(i);
		i += 2;
		j +=2;
		if (i == 91) { i = 98; j = 1; }
		
	}

	while (i != 124);

	
}