#include<iostream>
#include<string.h>

using namespace std;

class customer
{
     protected:
    string name, contact;
    public:
     void get_info()
     {
          cout<<"\n\t\t ************ WELCOM TO PUNJABI DHABA ************ \n";
          cout<<"Enter your Name : ";
          cin>>name;
          cout<<"Enter your Contact Number : ";
          cin>>contact;
     }

     void show_info()
     {
          cout<<"\n\t Name               : "<<name<<endl;
          cout<<"\n\t Contact Number     : "<<contact<<endl;
     }

};


class Show_bill : public customer 
{

    protected :   

      double  GST  ,  disc , Net_bill,bill_amt =0 ;
      int   Bill =0 , quty;

      string Ditems[9];

     public :


      int item1()
      {
         cout<<"\n \tEnter Qunatity : ";
         cin>>quty;
         Ditems[0] = "kaju-kari = 250 ";
         return Bill = Bill + quty*250;
      }

      int item2()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty;
         Ditems[1] = "panirtikka butter masala = 200 ";
         return Bill = Bill + quty*200;
      }

      int item3()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty;
         Ditems[2] = "kaju-gathiya  = 300";
         return Bill = Bill + quty*300;
      }

      int item4()
      {
         cout<<"\n \tEnter Qunatity : ";
         cin>>quty;
         Ditems[3] = "panir-masalaaa = 279";
         return Bill = Bill + quty*279;
      }

      int item5()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty;
         Ditems[4] = "kaju-masalaa = 320";
         return Bill = Bill + quty*320;
      }

      int item6()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty;
         Ditems[4] = "kaju-angara = 310";
         return Bill = Bill + quty*310;
      }


      double Show_Bill_Amt()
      { 
         
         return bill_amt = bill_amt + Bill;
      }

      double Show_disc()
      {
         if (bill_amt >  5000 )
        {
            return disc = ( bill_amt *3100  ) / 250; 
        }

        else 
        {
            return disc = 0;
        }
      }

      double Show_GST()
      {
         return  GST = ( bill_amt * 5) / 250;  
      }

      double Show_Net_bill()
      {
        return Net_bill =   bill_amt +  GST - disc ;
      }
   


      void Show_Net_Bill()
      {
            Show_bill_Items();
            cout<<"\n\t Total Order price  : "<<Show_Bill_Amt()<<endl;
            cout<<"\n\t GST                : "<<Show_GST()<<endl;
            cout<<"\n\t Discount           : "<<Show_disc() <<endl;
            cout<<"\n\t Net Bill iS        : "<<Show_Net_bill()<<endl; 
      }


      void Show_bill_Items()
      {

         int i ;

         for(i=0;i<9;i++)
         {
         if(!Ditems[i].empty())
         {
            cout<<"\n\t "<<i+1<<":"<<Ditems[i]<<endl;
         }
         }
      }

};


int main ()
{

     Show_bill a ;
     

        a.get_info();

        cout<<"\n\t\t\t :::::::::: Menu :::::::::: \n";
        cout<<" \n \t\t\t [1] kaju-kari                      : RS. 250 /- "; 
        cout<<" \n \t\t\t [2] panirtikka butter masala                  : RS. 200 /- "; 
        cout<<" \n \t\t\t [3] kaju-gathiya          : RS. 300 /- "; 
        cout<<" \n \t\t\t [4] panir-masalaaa            : RS. 279 /- ";
        cout<<" \n \t\t\t [5] kaju-masalaa            : RS. 320 /- \n";
        cout<<" \n \t\t\t  Confirm Your Order       [0]  \n";

        int i;

        do
        {
         cout<<"\n Enter your choice : ";
         cin>>i;
        switch (i)
        {
        case 1: 
             a.item1();
            
            break;
        case 2: 
             a.item2();
               
            break;
        case 3: 
             a.item3(); 
               
            break;
        case 4: 
             a.item4();
            
            break;
        case 5: 
            a.item5();
           
            break;

        case 0: 
           break;
        }

      } while (i!=0);


            a.show_info();
            a.Show_Net_Bill();

}