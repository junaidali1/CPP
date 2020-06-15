#include <iostream>

using namespace std;

int main(){
	int t;
	cout<< 	"which table do you want to be printed :";
	cin >> 	t;
	
	int i=1;
	while (i<11){
			cout << t << " X " << i << " = " <<t*i<<endl;
			i++;

	}
		
}
