#include <stdlib.h>
#include <unistd.h>

int main(){

	int return_value;
	return_value = system("ls -l /");
	sleep(30);
	return return_value;
}