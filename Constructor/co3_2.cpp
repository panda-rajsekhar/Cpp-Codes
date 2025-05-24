// constructor with default arguments for factorial
#include <iostream>
using namespace std;

class Factorial{
	public :
		Factorial(int n = 5){
			long long fact = 1;
			for (int i=1;i<=n;i++){
				fact*=i;
			}
			cout<<"Factorial of "<<n<<" is :"<<fact<<endl;
			
		}
};

int main(){
	Factorial f1;
	Factorial f2(10);
	return 0;
}
