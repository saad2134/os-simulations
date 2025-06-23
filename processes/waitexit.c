#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
	int i, pid;
	pid = fork();
	if (pid == -1) {
		printf("\nFork Failed");
		exit(0);
	}
	else if (pid > 0) {
		printf("\nChild process starts: ");
		for (i=0; i<5; i++) {
			printf("\nChild process %d is called", i);
		}
		printf("\nChild process ends");
	}
	else {
		wait(3);
		printf("\nParent process ends.");
	}
	exit(0);
}
