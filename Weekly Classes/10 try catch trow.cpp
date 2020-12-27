#include <iostream> 
using namespace std; 

int main(){
	cout << "Welcome";
	//agar try main throw run hoga howa toh baqaya
	//line nhn chalengi aur catch block run hoga
	
	//agar try main throw run na howa toh baqaya lines
	//run hongi, aur catch block run nhn hoga
	
	//try catch sath main likhne hain,
	//agar ek na howa toh error aega
	
	//throw akela run hojaiga, par stop hojaiga aur
	//age ki lines nhn chalengi
	try{
		throw 10;
		cout << "\nIn Try";
	}
	catch(int e){
		cout << "\nException No. "<<e;
	}
	
	cout << "\nLast line..";
	
}
