/* To find the smallest and the largest number entered in a array along with their position 
1. user input the size of the array and then the elements of the arry 
2. declare 2 variable for max and min of elements of array and then equate them to index 0 of array 
3. declare two index min and max and equate them to 0 as intital value 
4. make the for loop run in increment to the times of element in the loop and then inside the for loop run 2 if 
one being if arr[i]>maxelement then its the max element and its index is the max index and the opposite for the smallest.


*/
#include <iostream>
using namespace std;

int main(){
	int n ;
	cout << "Enter the size of Array : ";
	cin>> n;
	int arr[n];
	cout<<"Enter "<<n<<" Elements :";
	for (int i = 0;i<n;i++){
		cin>>arr[i];
	}
	
	int maxEle = arr[0];
	int minEle = arr[0];
	int maxIndex = 0;
	int minIndex = 0;
	
	
	for(int i = 1;i<n;i++){
		if(arr[i]>maxEle){
			maxEle = arr[i];
			maxIndex = i;
		}
		if(arr[i]<minEle){
			minEle = arr[i];
			minIndex = i;
		}
	}
	
	cout<<"Largest Element :"<<maxEle<<" Position :" <<maxIndex+1<<endl;
	cout<<"Smallest Element :"<<minEle<<" Position :"<<minIndex+1<<endl;
	
	return 0;
}
