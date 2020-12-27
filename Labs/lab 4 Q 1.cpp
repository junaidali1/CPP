//1.	Create a class tollbooth. 
//The two data items are a type int to hold the total number of cars and a type double to hold the total amount of money collected. 
//A constructor initializes both these to 0. 
//When a car passes the toll, a member function called payingCar( )  increments the car total and adds 0.50 to the cash total. 
//Another member function displays the two totals. DESIGN and IMPLEMENT this case. 
//Make assumptions (if required) and include it in the description before designing the solution.


#include <iostream>
#include <iomanip> 

using namespace std;
class tollbooth{
	public:
		int 	totalCars;
		double 	totalAmount;
		double cashTotal;
		
		int NoOfCars;
		int passedCars;

	public:
		tollbooth(): totalCars(0), totalAmount(0.0){}
		
		int payingCar(){
			//Asking user the number of cars will pass 
			cout << "No of cars will pass : " ; cin >> NoOfCars;
			//
		}
		
		int collectingAmount(){
			totalCars = 0;
			for (int i=0; i<NoOfCars;i++){
							//Collecting amount from car
							totalAmount = totalAmount + 0.50 ;
							//Adding to the cash total
							//cashTotal = cashTotal + totalAmount;
							cashTotal = totalAmount;
							
							
							totalCars = totalCars + 1;
							passedCars = totalCars;
							
							showTotals();
				
			}
		}
		
		void showTotals(){
			
				cout << "Passed Cars \t: "<< passedCars 	<< endl ;
				cout << "Cash Collected \t: "<< cashTotal 	<< endl << endl;
				
			}
};


int main(){
	tollbooth t1;
	t1.payingCar();
	t1.collectingAmount();
	t1.showTotals();
}
