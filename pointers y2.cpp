#include<iostream>
using namespace std;
int  main(){
  
  int arr[5]={10,20,30,40,50};
  int *pArr=arr;
  cout<<"The first element is "<<*pArr<<endl;
  cout<<"The first element is "<<*arr<<endl;

  
    for(int i=0;i<5;i++){
  	cout<<"The element at index "<<i<<"="<<arr[i]<<endl;
  }
  
  cout<<"Using pointer"<<endl;
  for(int i=0;i<5;i++){
  	cout<<"The element at index "<<i<<"="<<*(pArr+i)<<endl;
  }
  
  
  
  
  
  
  
  
  
  
  
//    int num1=20;
//    int *p=&num1;
//    double d=10.5;
//    double *ptr=&d;
//    cout<<"The value of num1="<<num1<<endl;
//    cout<<"The address of num1 using pointers="<<*p<<endl;
//    cout<<"The address of num1 ="<<&num1<<endl;
//    cout<<"The address of num1 using pointers ="<<p<<endl;
//    cout<<"The address of the pointer p is "<<&p<<endl;
//    *p=50;
//      cout<<"The value of num1="<<num1<<endl;
//    cout<<"The address of num1 using pointers="<<*p<<endl;
//    num1=15;
//      cout<<"The value of num1="<<num1<<endl;
//    cout<<"The address of num1 using pointers="<<*p<<endl;
//    cout<<sizeof(ptr)<<endl;
//    cout<<sizeof(p)<<endl;
    return 0;
}
