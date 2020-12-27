#include <iostream>
using namespace std;

class aClass{
	private:
		int alpha ;
	public:
		void nonFunc(){					//Non - constant function
			alpha = 99;					// OK
		}
		
			
		void constFunc() const{			// Constant function
			alpha = 98;					// Error
		}
		
};
