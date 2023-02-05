#include<iostream>
using namespace std;
float calculatePrice(float money,int year);
main()
{
    float money;   
    int year;      
    cout<<"Enter inherited money : ";
    cin>>money;
    cout<<"Year until you want to live in the past : ";
    cin>>year;
    float price=calculatePrice(money,year);

}
float calculatePrice(float money,int year)
{
    int age=17;
    for(int pastyear=1800;pastyear<=year;pastyear++)
    {
        age=age+1;
        if(pastyear%2!=0)
        {
            money=money-(12000.00+ 50.00*(age));
        }
        else if(pastyear%2==0)
        {
            money=money-12000.00;
        }
    }
    
    if (money>0)
    {
        cout<<"Yes! You will live a carefree life and will have "<<money<<" dollars left.";
    } 
    if (money<0)
    {
        cout<< " You will need "<<-money<<" dollars to survive.";
    }    
}
