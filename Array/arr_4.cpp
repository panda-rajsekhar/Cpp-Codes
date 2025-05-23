/*
Size of array

In c++ we do not have the legth function , instead we have to use the sizeof() operator trick 

First find the size occupied by the whole array in the memory 

then divide it by the size of a single element 

as all the element are of same size because they are of the same type

Doing this will give us the size of the array 
*/

#include <iostream>
using namespace std;

int main(){
	
	double arr[5] = {1.3,2.4,3.1,4.3,5.6};
	
	cout <<"Size of Array :"<<sizeof(arr)<<endl;
	cout <<"Size of 1 element :"<<sizeof(arr[0])<<endl;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Length of Array :"<<n<< endl;
	
	return 0;
}
