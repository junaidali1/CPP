/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void sub(int a,int b){
	int ans;
	ans = a - b;
	cout << "ans = "<<ans;
	
}

void add(int a,int b){
	int ans;
	ans = a + b;
	cout << "ans = " << ans;
}

void multiply(int a,int b){
	int ans;
	ans = a * b;
	cout << "ans = " << ans;
}

void divide(int a,int b){
	int ans;
	ans = a / b;
	cout << "ans = " << ans;
}

int main(){
	int m,n,select_operation;
	cout << "select operation\n\n1 for Subtraction\n2 for Addition\n3 for Multiplication\n2 for Division\n\nSelecting : "; cin >> select_operation;
	cout << "Enter m :" ; cin >> m ;
	cout << "Enter n :" ; cin >> n ;
	
	
	if (select_operation == 1){
		sub(m,n);
	} else if (select_operation == 2){
		add(m,n);
	} else if (select_operation == 3){
		multiply(m,n);
	} else if (select_operation == 4){
		divide(m,n);
	}

	
}

