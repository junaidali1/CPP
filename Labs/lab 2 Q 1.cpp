//1.	Create a class DM which stores and displays the values of distances. 
//DM stores distances in meters and centimeters. 
//The value of distance should be entered by the user

#include <iostream>
#include <conio.h>
using namespace std;

class DM{
	public:
		int m,cm;
		
	public:
		void getinfo(){
			cout << "Please enter the distance in meters : " ; cin >> m ;
			cout << "\nPlease enter the distance in centimeters  : " ; cin >> cm;
		}
		
		void showinfo(){
			cout << "\nmeters are : \t\t" << m ;
			cout << "\ncentimeters are : \t" << cm;
			
			}
};

int main(){
	DM d1;
	d1.getinfo();
	d1.showinfo();
	
}


