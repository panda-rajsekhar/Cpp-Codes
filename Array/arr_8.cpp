/* 2d Array Addition*/
#include <iostream>
using namespace std;

int main(){
	int r1,c1;
	
	cout << "For adding 2D array Elements we are keeping the order same for both matrices !"<<endl;
	
	cout<<"Enter Rows and Columns of 1st Matrix : ";
	
	cin>>r1>>c1;
	
	int matrix1[r1][c1],matrix2[r1][c1],sum[r1][c1];
	
	cout <<"Enter "<<r1*c1<<" Elements for 1st Matrix : \n";	
	
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cin>>matrix1[i][j];
		}
	}
	
	cout <<"Enter "<<r1*c1<<" Elements for 2nd Matrix :\n";	
	
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cin>>matrix2[i][j];
		}
	}
	
	cout<<"The Sum of Matrx Elements : \n";
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			sum[i][j]= matrix1[i][j]+matrix2[i][j];
		}
	}
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cout << sum[i][j] << " ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
