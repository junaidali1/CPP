#include <iostream>
using namespace std;

class shape
{
	protected:
		double height;
		double base;
	
	public:
		void get_data()
		{
			cout << "\n Enter height : " ;cin >> height;
			cout << "\n Enter base : " ;cin >> base;
		}
		virtual void display_area() = 0;
		
};

class triangle : public shape
{
	public:
		void get_data()
		{
			cout << "\n TRIANGLE" << endl;
			shape :: get_data();
		}
		void display_area()
		{
			cout << "\n With Parameters :  height = " << height << " , base = " << base << endl;
			cout << "\n Triangle Area = " << (0.5 * (height * base)) << " units" << endl;
		}
};

class rectangle : public shape
{
	public:
		void get_data()
		{
			cout << "\n RECTANGLE" << endl;
			shape :: get_data();
				
		}
		void display_area()
		{
			cout << "\n With Parameters :  length = " << height << " , width = " << base << endl;
			cout << "\n Rectangle Area = " <<  (height * base)  << " units"<< endl;		
		}
	
};

int main()
{
	triangle t1;
	rectangle r1;
	cout << "~~ Enter Values for Triangle Area ~~~\n";
	shape*ptr[10];
	ptr[0] = &t1;
	ptr[0] -> get_data();
	ptr[0] -> display_area();
	
	cout << "\n~~~ Enter Values for Rectangle Area ~~~\n";
	ptr[1] = &r1;
	ptr[1] -> get_data();
	ptr[1] -> display_area();
	
	cout << endl;
	return 0;
	
}
