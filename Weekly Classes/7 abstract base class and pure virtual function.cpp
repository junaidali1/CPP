#include <iostream>
using namespace std;

class Base{
	public:
		virtual void show()=0;
};

class Derv1 : public Base{
	public:
		void show(){
			cout << "Derv1\n";
		}
};

class Derv2 : public Base{
	public:
		void show(){
			cout << "Derv2\n";
		}
};

int main(){
	//Base b; 
			//object of base class can't be define bacause 
			// pure virtual function is in base class.
			
	Derv1 dv1;
	Derv2 dv2;
	
	dv1.show();	
	dv2.show();	

	
}
