#include <iostream>
using namespace std;

class publication
{
    private:
        string title;
        float price;
    public:
        void getData ()
        {
            cout << "Enter title: " << endl;  cin >> title;
            cout << "Enter price: " << endl;  cin >> price;
        };
        void putData ()
        {
            cout<<"Title: "<<title<<endl;
            cout<<"Price: "<<price<<endl;
        };
};

class book:public publication
{
    private:
        unsigned int page_count;
    public:
        void getData()
        {
            publication::getData();
            cout << "Enter page count: " << endl;   cin >> page_count; 
        };
        void putData()
        {
            publication::putData();
            cout<<"Page count: "<<page_count<<endl;
        };
};

class tape:public publication
{
    private:
        float play_time;
    public:
        void getData()
        {
            publication::getData();
            cout << "Enter play time: " << endl;   cin >> play_time; 
        };
        void putData()
        {
            publication::putData();
            cout<<"Play time: "<<play_time<<endl;
        };
};

int main ()
{
  book b1;
  tape t1;
  b1.getData();
  t1.getData();
  b1.putData();
  t1.putData();
  return 0;
}
