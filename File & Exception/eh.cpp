/*
Exception : Unexpected problem that occur during the program run.
Process of dealing with exception is called exception handling.

try catch block
It is an exception handling mechanism 
where the code that may cause an exception is placed inside the try block and
 the code that handles the exception is placed inside the catch block
 
 
 example : zero division 
*/

#include <iostream>
using namespace std;

float divide(float num,float dnum){
	if (dnum == 0){
		throw "Division by Zero Exception ";
	}
	else if(num<0||dnum<0){
		throw "Division by Negative Exception";
	}
	return num/dnum;
}

int main(){
	
	double x,y;
	cout<<"Enter Numerator for Division :"<<endl;
	cin>>x;
	cout<<"Enter Denominator"<<endl;
	cin>>y;
	
	
	try{
		float res = divide(x,y);
		cout<<"Result "<<res<<endl;
	}
	catch(const char* error){
		cout<<"Error "<<error<<endl;
	}
	catch(...){
		cout<<"Caught Unknown Exception"<<endl;
	}
	
	return  0;
}
