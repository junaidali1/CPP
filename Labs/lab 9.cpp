#include <iostream>
using namespace std;

class father
{

public:
	virtual void iam()
		{ cout << "I AM FATHER, and my age is 65" << endl;}
};

class son : public father 			//derived class son
{
public:
void iam()
{ cout << "I AM SON, and my age is 18" <<endl; }
};

class daughter : public father 			//derived class faughter
{
public:
void iam()
{ cout << "I AM DAUGHTER, and my age is 20"<<endl; }
};



int main(){
	father f1;
	f1.iam();
	
	son s; 						//object of derived class son
	daughter d; 				//object of derived class daughter
	father* ptr;				//pointer to father base class
	ptr = &s; 
	ptr->iam(); 				//execute iam()
	ptr = &d; 					//put address of d in pointer
	ptr->iam();
}

