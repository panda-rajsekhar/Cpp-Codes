/*
2 D Array

we weill be using the following syntax for the declaration of a 2d array :
data_type array_name[size1][size2]

The complexity of array operations increase exponentially over the dimentions increased 


simple 2d array  :
int arr[2][2] = { {1,2},{3,4} } 

inputting aray elements 

*/


#include <iostream>
using namespace std;

int main(){
	int r ,c;
	cout << "Enter the Rows and Columns of 2D Array :";
	cin>>r>>c;
	int matrix[r][c];
	cout<<"Enter "<<r*c<<" Elements :";
	for (int i = 0;i<r;i++){
		for (int j= 0;j<c;j++){
			cin>>matrix[i][j];
		}
	}
	
	cout<<"Elements of 2D Matrix :"<<endl;
	for (int i = 0;i<r;i++){
		for (int j= 0;j<c;j++){
			cout<<matrix[i][j]<< " ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
