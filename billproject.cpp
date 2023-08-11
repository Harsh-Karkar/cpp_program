#include<iostream>
using namespace std;
class bill{
    public:
    string name,numb;
    int qty[11],bill=0,grossbill=0,disc,amount[11];
    float sgst,cgst,GST,netbill=0;
    string items[11];

    void menu()
    {       cout<<"<============================================HOTEL GIRNAR ======================================>"<<endl;
            cout<<"\nEnter Your Name :";
            cin>>name;
            cout<<"\nEnter Your Number :";
            cin>>numb;
            cout<<"\n**********************MENU*******************"<<endl;
            cout<<"\n1.kaju-kari"<<"\t\t\t\t\tRs.200/-";
            cout<<"\n2.panirtikka butter masala"<<"\t\t\tRS.165/-";
            cout<<"\n3.Paneer Bhurji"<<"\t\t\t\t\tRs.165/-";
            cout<<"\n4.kaju-angara"<<"\t\t\t\t\tRs.320/-";
            cout<<"\n5.kaju-gathiya"<<"\t\t\t\t\tRs.255/-";
            cout<<"\n6.kumbhaniya bhajiya"<<"\t\t\t\tRs.300/-";
            cout<<"\n7.girnar special"<<"\t\t\t\tRs.400/-";    
            cout<<"\n8.panir-chilli with cheese"<<"\t\t\tRs.400/-";
            cout<<"\n9.butter naan"<<"\t\t\t\t\tRs.35/-";
            cout<<"\n10.Extra Topping Cheese"<<"\t\t\t\tRs.50/-";
            cout<<"\n      0. Confirm Your Order \n\n";
    }
    void customer()
    {
        cout<<"Your Name is :"<<name<<endl;
        cout<<"Your Mobile Number is :"<<numb<<endl;
    }
    int item1()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[0];
        items[0]="\tkaju-kari                       Rs.200/-";
        amount[0]=qty[0]*200;
        return bill=bill+qty[0]*200;
    }
    int item2()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[1];
        items[1]="\tpanirtikka butter masala        Rs.165/-";
        amount[1]=qty[1]*165;
        return bill=bill+qty[1]*165;
    }
    int item3()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[2];
        items[2]="\tPaneer Bhurji                   Rs.165/-";
        amount[2]=qty[2]*165;
        return bill=bill+qty[2]*165;
    }  
    int item4()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[3];
        items[3]="\tkaju-angara                     Rs.320/-";
        amount[3]=qty[3]*320;
        return bill=bill+qty[3]*320;
    }
    int item5()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[4];
        items[4]="\tkaju-gathiya                    Rs.255/-";
        amount[4]=qty[4]*255;
        return bill=bill+qty[4]*255;
    }    
    int item6()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[5];
        items[5]="\tkumbhaniya bhajiya              Rs.300/-";
        amount[5]=qty[5]*300;
        return bill=bill+qty[5]*300;
    }
    int item7()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[6];
        items[6]="\tgirnar special                  Rs.400/-";
        amount[6]=qty[6]*400;
        return bill=bill+qty[6]*400;
    }
    int item8()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[7];
        items[7]="\tpanir-chilli with chese          Rs.400/-";
        amount[7]=qty[7]*400;
        return bill=bill+qty[7]*400;
    }
    int item9()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[8];
        items[8]="\tbutter naan                      Rs.35/-";
        amount[8]=qty[8]*35;
        return bill=bill+qty[8]*35;
    }
    int item10()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[9];
        items[9]="\tbutter chapati                   Rs.25/-";
        amount[9]=qty[9]*25;
        return bill=bill+qty[9]*25;
    }
    int item11()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[10];
        items[10]="\tExtra Topping Cheese             Rs.50/-";
        amount[10]=qty[10]*50;
        return bill=bill+qty[10]*50;
    }
    int Gross()
    {
        return grossbill=grossbill + bill;
    }
    int DISCOUNT()
    {
        if(grossbill>1000)
        {
            return disc=(grossbill*10)/100;
        }
        else{
            return disc =0;
        }
    }
    int CGST()
    {
        return cgst=(grossbill*2.50)/100;
    }
    int SGST()
    {
        return sgst=(grossbill*2.50)/100;
    }
    int displaygst()
    {
        return GST=cgst + sgst ;
    }
    int Net()
    {
        return netbill = grossbill - disc + GST;
    }
    void displayitems()
    {
        int i;
        for(i=0;i<11;i++)
        {
            if(!items[i].empty())
            {
                cout<<i+1<<"  : "<<items[i]<<"\t\t   "<<qty[i]<<"\t\t\t\t  "<<amount[i]<<"/-"<<endl;
            }
        }
    }
    void display()
    {
        cout<<"\n<=================================================HOTEL GIRNAR KATHIYAVADI & PANJABI======================================================>";
        cout<<"\nCustomer Name                  :"<<name<<endl;
        cout<<"\nCustomer Mobile Number         :"<<numb<<endl;
        cout<<"\n******************************************************OREDER LIST********************************************************"<<endl;
        cout<<"\nNO\tITEMS\t\t\t\tRATE\t\t\tQUANTITY\t\t\tAMOUNT"<<endl;
        //displayitems();
    }

};
int main()
{
    bill x;
    int ch;
    x.menu();

    do{
        cout<<"Enter Your Choice :";
        cin>>ch;
        switch(ch)
        {
            case 1:
                x.item1();
                break;
            case 2:
                x.item2();
                break;
            case 3:
                x.item3();
                break;
            case 4:
                x.item4();
                break;
            case 5:
                x.item5();
                break;
            case 6:
                x.item6();
                break;
            case 7:
                x.item7();
                break;
            case 8:
                x.item8();
                break;
            case 9:
                x.item9();
                break;
            case 10:
                x.item10();
                break;
            case 11:
                x.item11();
                break;
            case 0:
                cout<<"Your order is confirmed .\n";
                break;
            default:
                cout<<"Sorry ! You choose something wrong. Please try again.\n";
                break;
        }

    }while(ch != 0);
    x.display();
    x.displayitems();
    cout<<"\n============================================================================================================================="<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t      Gross Bill :"<<x.Gross()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t      Discount   :"<<x.DISCOUNT()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t      CGST       :"<<x.CGST()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t      SGST       :"<<x.SGST()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t      GST        :"<<x.displaygst()<<"/-"<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t      Net Bill   :"<<x.Net()<<"/-"<<endl;
    cout<<"================================================================================================================================"<<endl;
    cout<<"\n\t\t\t\t\t\t*******THANK YOU . VISIT AGAIN .*******";
}  