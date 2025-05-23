#include <iostream>
using namespace std;

int main(){
	int arr[5];
	cout <<"Enter 5 Numbers :";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	
	for(int i = 0;i<5;i++){
		cout<<"Element"<<i<<":"<<arr[i]<<endl;
	}
	
	
	return 0;
}
