#include<iostream>
using namespace std;
class base{
    protected :
    int n;
    public :
    void setN(int a)
    {
        n=a;

    }
  
};
  class derived1 : public base 
    {
      public  :
      int m;
      void setM(int b)
      {
        m=b;

      }   
      void product()
      {
        cout<<"product of m and n is :"<<m*n<<endl;
      }
    };
     class derived2 : public base 
    {
      public  :
      int a;
      void setA(int b)
      {
        a=b;

      }   
      void add()
      {
        cout<<"product of m and n is :"<<a+n<<endl;
      }
    };
    int main()
    {
        derived1 d1;
        d1.setN(5);
        d1.setM(15);
        d1.product();

        derived2 d2;
        d2.setN(15);
        d2.setA(8);
        d2.add();
    }

    // table  & reverse number up to n