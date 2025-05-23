/* 
Traversing a array :
Travresing a array means to visit each element one by one .
The advantage of array is that it can be easily traversed with a loop 
The loop runs from 0 to size -1 
We can use this loop variable as index of the array and can easily access each element one after the other
*/

#include <iostream>
using namespace std;

int main(){
	
	int arr[6] = {1,2,3,4,5,6};
	
	// Traversing and printing the elements of array
	
	for (int i = 0;i<6;i++){
		cout<< arr[i] <<"  ";
	}
	
	return 0;
}
