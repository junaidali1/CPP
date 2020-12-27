#include<iostream>
#include<string.h>
using namespace std;

class String{
        public:
                char str[50];
        public:
                void getData(){
                        cout<<"Enter string : ";
                        cin>> str;
                }
                
                void showData(){
                        cout<<str;
                }
                
                String operator+(String x){
                        String s;
                        strcat(str,x.str);
                        strcpy(s.str,str);
                        return s;
                }
};
int main(){
        String str1, str2, str3;

        str1.getData();
        str2.getData();

        cout<<"\n-----------";
        cout<<"\n\n 1st string : ";
        str1.showData();   

        cout<<"\n\n 2nd string : ";
        str2.showData();

        cout<<"\n\n-----------";
        str3=str1+str2;         
        cout<<"\n\n Concatenated string :  ";
        str3.showData();

        return 0;
    }
