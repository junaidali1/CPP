//prints the sum, average, product, smallest and largest of these nUMBER

#include <iostream>
using namespace std;

int main(){

	int a,b,c;
	int sum,average,product,smallest,largest;
	
	cout << "\nEnter a : "; cin >> a;
	cout << "\nEnter b : "; cin >> b;
	cout << "\nEnter c : "; cin >> c;
	
	sum = a + b + c;
	average = (sum)/3;
	product = a * b * c;
	
	cout << "\nSum is : " << sum;
	cout << "\nAverage is : " << average;
	cout << "\nProduct is : " << product;
	
	int min;
	min = a;
	
	if (min > b){
		min = b;
	}
	
	if (min > c){
		min = c;
	}
	
	cout << "\nMin is : " << min;
	
	int max;
	if (max < b){
		max = b;
	}
	if (max < c){
		max = c;
	}
	
	cout << "\nMax is : " << max;
	
	
	
}
