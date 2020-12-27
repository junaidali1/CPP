#include <iostream>
using namespace std;

class aClass{
	private:
		const int pi = 3.14;
		int r;
		
	public:
		void show(){
					cout << "Enter r : "; cin >> r;		
					cout << pi;			
		}

};

int main(){
	aClass c1;
	c1.show();
}
