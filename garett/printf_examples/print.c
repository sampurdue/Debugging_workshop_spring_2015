#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Beginning my program.\n");
	
	printf("Initializing.\n");
	//initialize variables
	int a[10];
	int i;
	int sum = 0;
	int no = 1;
	
	//setup array
	printf("Setting up array.\n");
	for(i = 0; i < 10; i++){
		a[i] = i;
		no = (no + 1) % 2;
	}
	
	//program body
	printf("Begging loop evaluation.\n");
	printf("sum=%d\n", sum);
	for(i = 0;  i <= 5; i++){
		printf("i=%d, sum=%d\n", i, sum);
		sum += a[i];
	}
	printf("Ending loop evaluation.\n");
	printf("sum=%d\n", sum);
	
	printf("Validating.\n");
	//validation
	printf("Taking if statement.\n");
	if(sum == 10){
		printf("Beginning while loop.\n");
		while(no){
			i++;
		}
		printf("Exiting while loop.\n");
	} else {
		printf("Early exit.\n");
		exit(0);
	}
	
	//done
	printf("Program finished\n.");
}
