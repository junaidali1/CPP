#include <iostream>
#include <conio.h>

using namespace std;

void fun(){
	
	static int x;			//static variable always initialized to 0
	cout << x ;
	
	int y;					//Instance variable
	
}

int main(){
	fun();
}
