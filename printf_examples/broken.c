#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Beginning my program.\n");
	
	//initialize variables
	int a[10];
	int i;
	int sum = 0;
	int no = 1;
	
	//setup array
	for(i = 0; i < 10; i++){
		a[i] = i;
		no = (no + 1) % 2;
	}
	
	//program body
	for(i = 0;  i <= 5; i++){
		sum += a[i];
	}
	
	//validation
	if(sum == 10){
		while(no){
			i++;
		}
	} else {
		exit(0);
	}
	
	//done
	printf("Program finished\n.");
}
