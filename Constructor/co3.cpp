/* Constructor With Default Arguments*/

#include <iostream>
using namespace std;

class DefCon{
	public :
		DefCon(int n =10){
			int a =0,b =1,next;
			cout<<"Fibonacci Series upto "<<n<<"Terms is :"<<endl;
			for (int i=0;i<n;i++){
				cout<<a<<" ";
				next = a+b;	
				a = b;
				b = next;
			}
			cout<<endl;
		}
};

int main(){
	DefCon obj;
	DefCon obj2(7);
	return 0;
}
