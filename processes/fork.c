#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
	int id, childid;
	id = getpid();
	childid = fork();


	if (childid > 0) {
		printf("\nI am in the parent process %d", id);
		printf("\nI am in the parent process %d", getpid());
		printf("\nI am in the parent process %d", getppid());
	}
	else {
		printf("\nI am in child process %d", id);
		printf("\nI am in the child process %d", getpid());
		printf("\nI am in the child process %d", getppid());
	}
	return 0;
}
