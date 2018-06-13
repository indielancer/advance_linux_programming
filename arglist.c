#include <stdio.h>

int main(int argc, char* argv[]){

	printf("The name of this program is %s.\n", argv[0] );
	printf("THis program was invoked with %d arguments\n", argc);

	if (argc > 1) {
		int i;
		printf("The arguments are:\n");
		for(i = 0; i < argc; i++)
			printf("%s\n", argv[i] );
	}


	return 0;
}