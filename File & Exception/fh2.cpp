#include <iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream infile("eniv.txt");
	string s;
	getline(infile,s);
	cout<<"Reading Line :"<<s<<endl;
	infile.close();
	return 0;
}
