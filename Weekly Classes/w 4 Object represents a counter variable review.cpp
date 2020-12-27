#include <iostream>
using namespace std;

class Counter{
		private:
			unsigned int count;
		public:
			Counter()	: count(0){
				cout << "This value of count is : "<<count <<endl;
			}
			
			void inc_count(){
				count++;
			}
			
			int get_count(){
				return count;
			}
};

int main(){
	Counter c1,c2;							//This value of count is : 0
											//This value of count is : 0
	
	cout << "\nc1 = " <<c1.get_count();		//c1 = 0		
	cout << "\nc2 = " <<c2.get_count();		//c2 = 0
	
	c1.inc_count();							
	c2.inc_count();
	c2.inc_count();
	
	cout << "\nc1 = " << c1.get_count();		//c1 = 1
	cout << "\nc2 = " << c2.get_count();	//c2 = 2
}

