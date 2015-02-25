#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Beginning my program.\n");
	
	printf("Initializing.\n");
	//initialize variables
	int a[10];
	int i;
	int sum = 0;
	int no = 0;
	
	//setup array
	printf("Setting up array.\n");
	for(i = 0; i < 10; i++){
		a[i] = i;
		no = (no + 1) % 2;
	}
	
	//program body
	printf("Begging loop evaluation.\n");
	for(i = 0;  i < 5; i++){
		sum += a[i];
	}
	
	printf("Validating.\n");
	//validation
	if(sum == 10){
		while(no){
			i++;
		}
	} else {
		printf("Early exit.\n");
		exit(0);
	}
	
	//done
	printf("Program finished with correct output.\n.");
}
