#include <iostream>
#include <conio.h>

using namespace std;

class Account{
	
	private:
		int balance;
		static float roi;
	
	public:		
		void setBalance( int b){
			balance = b;
		}
};

float Account :: roi = 3.5f;

int main(){
	Account a1,a2;
}
