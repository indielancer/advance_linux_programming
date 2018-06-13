#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	pid_t child_pid;

	printf("the main programm process Id is %d\n",  (int) getpid());

	child_pid = fork();
	if(child_pid !=0) {
		printf("PARRENT: this is the parent process, with id %d\n", (int) getpid() );
		printf("PARRENT: the child's process ID is %d\n", (int) child_pid );
	}
	else {
		printf("CHILD: this is the child process, with id %d\n", (int) getpid() );
		printf("CHILD: the child's process ID is %d\n", (int) child_pid );
	}
		
	printf("Now what? %d\n", (int) child_pid );
	return 0;

}