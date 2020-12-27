#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	int max = 80;						// size of buffer
	char buffer[max];					// character buffer
	
	ifstream file("junaid.txt");		// create file for input
	
	while (!file.eof()){				// until end of file	
					
		file.getline(buffer,max);		// read a line of text
		cout << buffer << endl;			// display it
	}
	
}
