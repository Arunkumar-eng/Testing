#include <stdio.h>
#include <unistd.h>

int main(){
	if(fork() && (!fork())){
		printf("hi\n");
		if(fork() || fork()){
			printf("bro\n");
			fork();
		}
	}

	printf("2 \n");
}