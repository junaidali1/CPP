#include <iostream>
using namespace std;

class Power{
	public:
		int ans = 1;
		int i = 0;
	public:

		int power(int x, int y) {
		   int i,power=1;
		   if(y == 0)
		   return 1;
		   for(i=1;i<=y;i++)
		   power=power*x;
		   return double(power);
		}
		
		int power(long x,long y){
			int i,power=1;
		    if(y == 0)
		    return 1;
		    for(i=1;i<=y;i++)
		    power=power*x;
		    return double(power);
		}
		
		int power(float x,float y){
			int i,power=1;
		    if(y == 0)
		    	return 1;
		    for(i=1;i<=y;i++)
		    power=power*x;
		    return double(power);
		}
};

int main(){
	Power p1,p2,p3; //p1 for int, p2 for double, p3 for float

	int p,n;			//p = base , n = power
	cout << "\n~~~~~~~~~~ Getting Int Values ~~~~~~~~~~\n\n";
	cout << "Enter base \t: "; cin>>p;
	cout << "Enter power \t: "; cin>>n;
	
	long a,b;

	a = long(p);
	b = long(n);
	
	float c,d;
	c = float (p);
	d = float (n);

	cout << "\n~~~~~~~~~~ Showing Power in double ~~~~~~~~~~\n\n";
	p1.power(p,n);
	cout << "base \t\t= " << p <<endl;
	cout << "exponent \t= " << n <<endl;
	cout<<"\nFrom Int Values \tbase^exponent \t= "<< p1.power(p,n) << endl;
	cout <<"\nFrom Long Values \tbase^exponent \t= "<< p2.power(a,b) << endl;
	cout <<"\nFrom Float Values \tbase^exponent \t= "<< p3.power(c,d) << endl;
}
