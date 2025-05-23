#include <fstream>
using namespace std;


int main(){
	
	ofstream outputFile("eniv.txt");
	
	outputFile<<"Hello,World!"<<endl;
	
	outputFile.close();
	
	return 0;
}
