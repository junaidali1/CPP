//Implementation of inheritance

#include <iostream>
#include <string>
using namespace std;
 

class Hospital
{
	protected:
		string patient_Name;       //name of patient
		string admission_Date;    //date of admission 
		string disease;                  //name of disease
		string discharge_Date;    //date of discharge
		
	public:
		void get_info()                 
		{
			cout<<"\nEnter Patient's Name \t\t: ";
			cin>>patient_Name;
			
			cout<<"Enter date of addmission \t: ";
			cin>>admission_Date;
			
			cout<<"Enter the name of disease \t: ";
			cin>>disease;
			
			cout<<"Enter date of discharge \t: ";
			cin>>discharge_Date;
		}
		
		void display_info()         
		{
			cout<<endl;
			cout<<"Patient Name\t\t\t: "<<patient_Name<<endl;
			cout<<"Date of Admission\t\t: "<<admission_Date<<endl;
			cout<<"Disease\t\t\t\t: "<<disease<<endl;
			cout<<"Date of Discharge\t\t: "<<discharge_Date<<endl;
		}
};

class Patient_Age : public Hospital
{
	private:
		unsigned int p_Age;
	
	public:
		void get_Age()     
		{
			Hospital::get_info();
			cout<<"Enter patient's age \t\t: ";
			cin>>p_Age;
		}
		
		void display_Age() 
		{
			Hospital::display_info();
			cout<<"Age of Patient: "<<p_Age<<endl;
		}
};

int main()
{
	Patient_Age p1, p2;
	
	cout<<"\nEnter details of the 1st patient. "<<endl;
	
	p1.get_Age();
	
	cout<<"\nEnter details of the 2nd patient. "<<endl;
	
	p2.get_Age();
	
	cout<<endl;
	cout<<"\nRECORDS OF THE PATIENT \n";
	
	p1.display_Age();
	p2.display_Age();
	
	cout<<endl;
	return 0;
}
