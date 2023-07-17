#include<iostream>
using namespace std;
class students
{
private:
    int adminNo;
    char sname[20];
    float eng,maths,science,total;
    float ctotal()
    {
        return eng + maths + science;
    }
public:

void takeData()
{
    cout<<"enter admin no : ";
    cin>>adminNo;
    cout<<"enter student name : ";
    cin>>sname;
    cout<<"enter englis mark : ";
    cin>>eng;
    cout<<"enter maths mark : ";
    cin>>maths;
    cout<<"enter science mark : ";
    cin>>science;

    total = ctotal();
}

void showData()
{
    cout<<"admin no : "<<adminNo<<endl;
    cout<<"student name : "<<sname<<endl;
    cout<<"englis mark : "<<eng<<endl;
    cout<<"maths mark : "<<maths<<endl;
    cout<<"science mark : "<<science<<endl;
    cout<<"total mark : : "<<total<<endl;
    
}
};

int main()
{
    students s;
    s.takeData();
    s.showData();
}
