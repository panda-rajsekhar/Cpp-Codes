// opening a non existant file
#include <fstream>
#include <iostream>
using namespace std;
int main(){
	fstream file("eniv.txt");
	if(!file.is_open()){
		cout<<"Error : Unable to open file!!"<<endl;
		return 1;
	}
	string line;
	while(getline(file,line)){
		cout<<line<<endl;
	}
	if(file.eof()){
		cout<<"Reached End of Line";
	}
	else{
		cout<<"Filed to Read"<<endl;
	}
	

		

	file.close();
	return 0;
}
