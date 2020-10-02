#include <iostream>
using namespace std;

class a {
	public:
		string name;
	public:
		void sample(){
			cout << "Please enter your name : "; 
			cin>> name;
		}
};

int main(){
	int i = 0;
	
	while (i == 0){
		a obj;
		obj.sample();
		
		cout << "Do you want to repeat?\n0. Yes\n1. No\n\nEnter selection : "; cin>> i; 
	}
}
