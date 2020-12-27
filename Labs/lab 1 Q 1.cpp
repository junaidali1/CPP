//Write a program that displays the squares, cubes and fourth powers of the numbers 1 through 5.

#include <iostream>
#include <conio.h>
using namespace std;



class power{
    public:
        int square(int a){
	        cout << "Sqaure of "<<a<<" is " <<a*a <<endl;
		}
	        
	    int cube (int a){
	    	cout << "Cube of "<<a<<" is " <<a*a*a<<endl;
		}
		
		int fourth_power(int a){
			cout << "Fourth Power of "<< a << " is "<< a*a*a*a << endl;
		}
	        
};

int main(){
	cout << "**********************************\tSquares\t\t********\n";
	int i;
	for (i=1;i<6;i++){
		power p2;
		p2.square(i);
	}
	
	cout << "**********************************\tCubes\t\t********\n";
	for (i=1;i<6;i++){
		power p3;
		p3.cube(i);
	}
	
	cout << "**********************************\tFourth Powers\t\t********\n";
	for (i=1;i<6;i++){
		power p4;
		p4.fourth_power(i);
	}
	

}

