#include <stdio.h>

int main() {
	
	// Write a program to allow the user to enter a number and print the corresponding day of the week.
	// Hint 1.Monday 2. Tuesday 3.Wednesday 4.Thursday 5.Friday 6.Saturday 0.Sunday
	
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	if(num==1){
		printf("1.Monday");
	} else if(num==2){
		printf("2.Tuesday");
	}else if(num==3){
		printf("3.Wednesday");
	}else if(num==4){
		printf("4.Thursday");
	}else if(num==5){
		printf("5.Friday");
	}else if(num==6){
		printf("6.Saturday");
	}else if(num==0){
		printf("0.Sunday");
	}else {
		printf("This doesn't correspond to the days in the week!");
	}
	
	
	
   return 0;
}
