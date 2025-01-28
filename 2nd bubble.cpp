#include<iostream>
using namespace std;

int main(){
	
	int array[] = {1,3,7,9,0,2,4,5,8,6};
	
	int length = 10;
	int i,j;
	
	for(i = 0; i < length; i++)
	{
		for(j = 0; j < (length -1); j++)
		{
			if (array[j] > array[j+1])
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	for(i = 0; i < length; i++)
	{
		cout<<"array["<<i<<"] = "<<array[i]<<endl;
	}
	
	return 0;
	}
