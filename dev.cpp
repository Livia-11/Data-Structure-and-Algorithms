#include<stdio.h>
int main(){

   int i,j,h;
       printf("Enter the height of the triangle: \n");
   scanf("%d",&h);

   int arr[h][h];

  for(i=0;i<h;i++){
      for(j=0;j<h;j++){
         if(i>=j){
            if((i==j)||j==0){
			 
               arr[i][j]=1;
              }
           else              {
			arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
           }
           printf("%d ", arr[i][j]);
          }

     } printf("\n");
   }

 return 0;
}//pascal's triangle

#include<stdio.h>
int main(){
	int i,p;
	int sum=0;
	
	printf("Enter the number of your choice: ");
	scanf("%d", &p);
	
	int arr[p];
	 printf("The numbers are: ");
	 for(i=0;i<p;i++){
	 	if(i==0 || i==1){
	 		arr[i]=1;
		 }else{
		 	arr[i]=arr[i-1]+arr[i-2];
		 }
		 printf("%d, ",arr[i]);
	 }
	return 0;
}//fibonnacci
