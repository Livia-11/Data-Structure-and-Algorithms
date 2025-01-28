#include<stdio.h>
int first(int x){
	x=1;
	int i,j;

	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf(" * ");
		}
		printf("\n");
	}
	
}
int main(){
	int i;
	i=first(2);
	
	return 0;
}
