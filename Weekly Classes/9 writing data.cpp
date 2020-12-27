#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	ofstream file("junaid.txt");	//Create ofstream class
	
	file << "writing in the file\n2nd Statement";	//Write data
	
	file.close();					//Close file
	
	cout << "Successful\n";
}
