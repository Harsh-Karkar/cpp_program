#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // write file 
    char  input [50];
    ofstream os;
    os.open("hello.txt");
    cout<<"writing to text file :";
    cout<<"please enter your name  :";
    cin.getline(input,100);
    os <<input <<endl;
     cout<<"please enter contact number  :"<<endl;
     cin>>input;
     cin.ignore();
     os<< input <<endl;
     os.close();


     //read file
     ifstream is;
     string line;
     is.open("hello.txt");
     cout<<"reading from a text file :"<<endl;
     while(getline(is,line))
     {
        cout<<line <<endl;
     }
     is.close();
     return 0;

}