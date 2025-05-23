/*
Write a program to user input the size and the elements of one dimensional array and then find the sum of all the 
elements of that array ?

Solutution :
Key concepts used : Traversing of array , sizeof() function and basic for loop 
*/

#include <iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the size of 1D array :";
	cin>> size;
	cout<< "Enter "<<size<<" Integer  Elements :";
	int arr[size];
	for(int i= 0;i<size;i++){
		cin>>arr[i];
	}
	int length  = sizeof(arr)/sizeof(arr[0]);
	int sum = 0;
	for (int j =0;j<length;j++){
		sum += arr[j];
	}
	
	cout<< "The sum of elements :"<<sum;
	return 0;
}
