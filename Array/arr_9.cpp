/* Printing Array In reverse  */

#include <iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the size of 1 D array:";
	cin>>size;
	int arr[size];
	cout << "Enter "<<size<<"Elements : ";
	for(int i = 0;i<size;i++){
		cin>>arr[i];
	}
	cout<< "Elements of Array In Reverse are :";
	for (int j = size-1;j>=0;j--){
		cout << arr[j]<< " ";
	}

	
	
	
	return 0;
}
