#include<iostream>
using namespace std;
class base{
    protected:
    int n;
    
};
class derived1 : public base{
    public:
    void table()
    {
        int i;
        cout<<"Enter value n: "<<endl;
        cin>>n;
        for(i=1; i<=10; i++)
        {
           cout<<n<<" x "<<i<<"  =  "<<n*i<<endl;
        }
    }
}; 

class derived2 : public base
{
    public : 

    void reverse()
    {
         
        int i;
        cout<<"Enter a number : ";
        cin>>n;
        for(i = n; i>=1; i--)
        {
            cout<<"\t"<<i;
        }
    }
};
int main()
{
    derived1 d1;
    d1.table();

    derived2 d2;
    d2.reverse();
}