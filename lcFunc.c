#include <stdio.h>
#include "lowCase.h"

int main(int argc, char* argv[]) {

	char c;

	while ((c = getchar()) != EOF) {
		
		if(lowCase(c))
		   printf("%c",c);
	}
	
	return 0;
} 
