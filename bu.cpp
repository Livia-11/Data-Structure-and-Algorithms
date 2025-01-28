#include<stdio.h>
 int main(){
// 	int a;
// 	int myArray[5]={4,7,8,9};

// 	scanf("%d",&myArray[2]);
// 	printf("%d", myArray[2]);

    int myarr[10];
    int i,j,k;
    int sum=0;
    
    printf("Enter numbers: ");
    for(i=0 ; i<10; i++){
    	scanf("%d", &myarr[i]);
	}
    for(j=0; j<10; j++){
    	printf("%d", myarr[j]);
	}
	for(k=0 ; k<10; k++){
		sum=sum+myarr[k];
		printf("The sum is: %d \n", sum);
	} 
	
 	return 0;
 }
