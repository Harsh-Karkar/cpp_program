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
          cout<<"\n\t\t ************ WELCOM TO GOLAS WORLD ************ \n";
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

      string Ditems[5];

     public :


      int item1()
      {
         cout<<"\n \tEnter Qunatity : ";
         cin>>quty;
         Ditems[0] = "Plain Gola = 150 ";
         return Bill = Bill + quty*150;
      }

      int item2()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty;
         Ditems[1] = "Dry Fruit Gola = 200 ";
         return Bill = Bill + quty*200;
      }

      int item3()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty;
         Ditems[2] = "Blagium Chocochips Gola = 280";
         return Bill = Bill + quty*280;
      }

      int item4()
      {
         cout<<"\n \tEnter Qunatity : ";
         cin>>quty;
         Ditems[3] = "Special Rajwadi Gola = 400";
         return Bill = Bill + quty*400;
      }

      int item5()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty;
         Ditems[4] = "Chiku Chocolate Gola = 350";
         return Bill = Bill + quty*350;
      }


      double Show_Bill_Amt()
      { 
         
         return bill_amt = bill_amt + Bill;
      }

      double Show_disc()
      {
         if (bill_amt >  5000 )
        {
            return disc = ( bill_amt *10  ) / 100; 
        }

        else 
        {
            return disc = 0;
        }
      }

      double Show_GST()
      {
         return  GST = ( bill_amt * 5) / 100;  
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

         for(i=0;i<5;i++)
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
        cout<<" \n \t\t\t [1] Plain Gola                      : RS. 150 /- "; 
        cout<<" \n \t\t\t [2] Dry Fruit Gola                  : RS. 200 /- "; 
        cout<<" \n \t\t\t [3] Blagium Chocochips Gola         : RS. 280 /- "; 
        cout<<" \n \t\t\t [4] Special Rajwadi Gola            : RS. 400 /- ";
        cout<<" \n \t\t\t [5] Chiku Chocolate Gola            : RS. 350 /- \n";
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
             //cout<<" \n \t\t\t [1] Plain Gola                         : RS. 150 \n";
            break;
        case 2: 
             a.item2();
               //  cout<<" \n \t\t\t [2] Dry Fruit Gola                 : RS. 200 \n";
            break;
        case 3: 
             a.item3(); 
               //  cout<<" \n \t\t\t [3] Blagium Chocochips Gola        : RS. 280 \n";
            break;
        case 4: 
             a.item4();
            // cout<<" \n \t\t\t [4] Special Rajwadi Gola               : RS. 400\n";
            break;
        case 5: 
            a.item5();
            //  cout<<" \n \t\t\t [5] Chiku Chocalate Gola              : RS. 350 \n";
            break;

        case 0: 
           break;
        }

      } while (i!=0);


            a.show_info();
            a.Show_Net_Bill();

}