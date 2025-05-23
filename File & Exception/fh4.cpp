/*working with function template*/
#include <iostream>
using namespace std;

//Function Template Definition

template<typename T>
T mymax(T x,T y){
	return(x>y)?x:y;

}

/*
1. template<typename T>

This line defines a template with a type parameter T.

    T is a placeholder for a data type that will be specified when the function is called.

    typename can also be replaced with class; both mean the same thing in templates.

2. T mymax(T x, T y)

This declares a function named mymax that:

    Takes two parameters of type T (same type).

    Returns a value of type T.

3. return (x > y) ? x : y;

This is the ternary operator:

    If x > y, then return x.

    Otherwise, return y.
    
    
*/
int main(){
	cout<<mymax<int>(3,5)<<endl;
	cout<<mymax<float>(3.5,5.5)<<endl;
	cout<<mymax<char>('g','e')<<endl;
	
	return 0;
}
