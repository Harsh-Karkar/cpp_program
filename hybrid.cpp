#include<iostream>
using namespace std;
class base{
    protected:
    int n;
    public :
    void setN(int a)
    {
        n=a;
    }

};
class derived1 : public base{
    protected :
    int m;
    public :
    void setM(int b)
    {
        m=b;
    }
};
class derived2 {
    protected :
    int a;
    public :
    void setA(int b)
    {
        a=b;
    }
};
class ABC : public derived1 , public derived2
{
    public :
    void product ()
    {
        cout<<"product of a ,m and n is :"<<a*m*n<<endl;
    }
};
int main()
{
    ABC z;
    z.setN(5);
    z.setM(10);
    z.setA(15);
    z.product();
}