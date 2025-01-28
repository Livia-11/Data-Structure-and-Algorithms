#include<iostream>
using namespace std;
 void bubbleSort(int arr[], int n){
 for( int i=0;i<n-1;i++)
 {
 for(int j=0;j<n-1;j++)
 {
 if(arr[j]>arr[j+1])
 {
 int temp=arr[j];
 arr[j]=arr[j+1];
 arr[j+1]=temp;
 }
}
} }
int main(){
 int n=9;
int arr[n]={5,9,1,10,3,6,4,8,2};
bubbleSort(arr,n);
 for(int k=0;k<n;k++){
 cout<<arr[k]<<" ";
 }
 cout<<endl;
 return 0;
 }




