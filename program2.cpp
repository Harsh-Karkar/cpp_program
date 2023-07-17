#include<iostream>
using namespace std;
class batsman{
    private:
    int bcode, inning, notout, runs, batavg;
    char bname[20];
    void calcavg(){
        batavg=runs/(inning-notout);
    }
    public:
    void readdata(){
        cout<<"Enter Batsman Code : ";
        cin>>bcode;
        cout<<"Enter Batsman name : ";
        cin>>bname;
        cout<<"Enter Played Inning : ";
        cin>>inning;
        cout<<"Enter Not-Out Inning : ";
        cin>>notout;
        cout<<"Enter Batsman Runs : ";
        cin>>runs;
        calcavg();
    }
    void displaydata(){
        cout<<"Batsman Code : "<<bcode<<endl;
        cout<<"Batsman name : "<<bname<<endl;
        cout<<"Played Inning : "<<inning<<endl;
        cout<<"Not-Out Inning : "<<notout<<endl;
        cout<<"Batsman Runs : "<<runs<<endl;
        cout<<"Average : "<<batavg<<endl;
    }
};
int main(){
    batsman b;
    b.readdata();
    b.displaydata();
}