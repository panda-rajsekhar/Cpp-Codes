/*What is destructor ?
A special member function that is automatically called whatn a object goes out of the scope or explicitly deleted 
Have same name as of the class preceded by tilde ~
*/
#include <iostream>
using namespace std;

class Code{
	public :
		Code(){
			cout<<"Constructor Called"<<endl;
		}
		~Code(){
			cout<<"Destructor Called"<<endl;
		}
};

int main(){
	Code obj;
	return 0;
}
