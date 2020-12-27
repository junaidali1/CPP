#include <iostream>
using namespace std;

class GM{
	private:
		string name,caste;
	public:
		void showinfo(){
			name = "Ghulam Murtaza"; caste = " Soomro ";
			cout << name << caste ;
		}
		
};

class Junaid:public GM{
	public:
		void show2(){
			GM::showinfo();
			cout << "father of Junaid Ali Soomro.";
		}
		
		
};

int main(){
	Junaid j1;
	j1.show2();
}
