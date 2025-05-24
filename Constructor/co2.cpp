/*
What is parameterized constructor ?
Its a type of constructor that allows us to pass arguments to a constructor
These arguments help to initialize object members 
*/

#include <iostream>
using namespace std;

class ParaCons{
	public :
		int num1;
		float num2 ;
	
	ParaCons(int x,float y){
		cout<<	"Parameterized Constructor Called \n ";
		num1 = x;
		num2 = y;
		
	}
	void display(){
		cout<<"Num1 :"<<num1<<", Num2 :"<<num2<<endl;
	}
};

int main(){
	ParaCons obj(55,77.77);
	obj.display();
	return 0;
}
