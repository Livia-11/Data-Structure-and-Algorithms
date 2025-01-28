#include<stdio.h>
int main(){
	int months, days;
	printf("Enter days: ");
	scanf("%d", &days);
	
	months = days / 30;
		days = days % 30;
	
	printf("Months = %d" , "days = %d" ,months, days);
	
	return 1;
}
