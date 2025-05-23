/*
Passing Array To a Function

Here we have a simple function pass_Array which has 2 arguments int arr[] & int size , which than on calling
pints the elements of the array 



*/

#include <iostream>
using namespace std;

void pass_Array(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<< " ";
	}
}

int main(){
	int arr[5] = {1,2,3,4,5};
	pass_Array(arr,5);
	return 0;
}
