#include <iostream>

using namespace std;

int sub(int a,int b){

	int c;
	c = a - b;
	return c;
}
int main(){
	int x,y,z;
	cout << "Enter x :"	; cin >> x;
	cout << "Enter y :" ; cin >> y;
	z = sub(x,y);
	cout << "answer is"<<z;
}
