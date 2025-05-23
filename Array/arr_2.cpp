/*
Please Refer to arr_1.cpp for the basics  of array, here we will learn to update the elements of a array ! :)

To change a particular element of a array we use the = , which is the assignment operator .

The assignment operator is basically used to assign values to a variable. 

The syntax for updating the element of an araay is : array_name[index] = value 

*/

#include <iostream>

using namespace std;

int main(){
	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	
	arr[4] = 50;
	
	cout<<arr[4]<<endl; 
	
	return 0;
}
