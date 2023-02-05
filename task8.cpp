#include <iostream>
using namespace std;

float buyTicket( float budget, string ticket, float members);

main()
{
    float budget;
    string ticket;
    float members;
    float remainingamount;
    float final;
    float result;


    cout << "Enter your budget = ";
    cin >> budget;
    cout << "Enter the ticket category = ";
    cin >> ticket;
    cout << "Enter the number of members = ";
    cin >> members;
    result = buyTicket( budget,ticket,members);
    if (( members >= 1 && members <=4) && ticket == "vip")
    {
        
        if (result < 0)
        {
            result = result * -1;
            cout << "NOT ENOUGH MONEY..YOU NEED " << result << " MONEY ";
        }
        else
        {
            cout << "YES! YOU HAVE " << result << " MONEY LEFT";
        }

    }
    if (( members >= 1 && members <=4) && ticket == "normal")
    {
       
        if (result < 0)
        {
            result = result * -1;
            cout << "NOT ENOUGH MONEY..YOU NEED " << result << " MONEY ";
        }
        else 
        {
            cout << "YES! YOU HAVE " << result << " MONEY LEFT";
        }
    }

    if (( members >= 5 && members <=9) && ticket == "normal")
     {
       
        if (result < 0)
        {
           result = result * -1;
            cout << "NOT ENOUGH MONEY..YOU NEED " << result << " MONEY ";
        }
        else 
        {
             cout << "YES! YOU HAVE " << result << " MONEY LEFT";
        }
     }
      if (( members >= 5 && members <=9) && ticket == "vip")
       {
        
        if (result < 0)
        {
            result = result * -1;
            cout << "NOT ENOUGH MONEY..YOU NEED " << result << " MONEY ";
        }
        else 
        {
             cout << "YES! YOU HAVE " << result << " MONEY LEFT";
        }
     }
     if (( members >= 10 && members <=24 ) && ticket == "vip")
     {
        
        if (result < 0)
        {
            result = result * -1;
            cout << "NOT ENOUGH MONEY..YOU NEED " << result << " MONEY ";
        }
        else
        {
             cout << "YES! YOU HAVE " << result << " MONEY LEFT";
        }
        
     }

     if (( members >= 10 && members <=24 ) && ticket == "normal")
      {
        
        if (result < 0)
        {
            result = result * -1;
            cout << "NOT ENOUGH MONEY..YOU NEED " << result << " MONEY ";
        }
        else
        {
             cout << "YES! YOU HAVE " << result << " MONEY LEFT";
        }
     }

     if (( members >= 25 && members <= 49 ) && ticket == "vip")
     {
        
        if(result < 0)
        {
            result = result * -1;
            cout << "NOT ENOUGH MONEY..YOU NEED " << result << " MONEY ";
        }
        else 
        {
         cout << "YES! YOU HAVE " << result << " MONEY LEFT";   

        }
     }

     if (( members >= 25 && members <= 49 ) && ticket == "normal")
     {
        
        if(result < 0)
        {
           result = result * -1;
            cout << "NOT ENOUGH MONEY..YOU NEED " << result << " MONEY ";
        }
        else
        {
             cout << "YES! YOU HAVE " << result << " MONEY LEFT";
        }
     }

     if ( members >=50  && ticket == "vip")
      {
       
        if (result < 0)
        {
            result = result * -1;
            cout << "NOT ENOUGH MONEY..YOU NEED " << result << " MONEY ";
        }
        else
        {
             cout << "YES! YOU HAVE " << result << " MONEY LEFT";
        }
     }

     if ( members >=50  && ticket == "normal")
      {
      
        if (result < 0)
        {
            result = result * -1;
            cout << "NOT ENOUGH MONEY..YOU NEED " << result << " MONEY ";
        }
        else
        {
             cout << "YES! YOU HAVE " << result << " MONEY LEFT";
        }
      }
}








float buyTicket( float budget, string ticket, float members)
 {  
    float answer;
    float remainingamount;
    float newvalue;
    float final;
    float vipprice = 499.99;
    float normalprice = 249.99;


    if (( members >= 1 && members <=4) && ticket == "vip")
    {answer = budget * 0.75;
    remainingamount = budget - answer;
    final=members* vipprice;
    newvalue = remainingamount - final;
    }

    if (( members >= 1 && members <=4) && ticket == "normal")
    {answer = budget * 0.75;
    remainingamount = budget - answer;
    final=members*normalprice;
    newvalue = remainingamount - final;
    }

    if (( members >= 5 && members <=9) && ticket == "normal")
    {answer = budget * 0.6;
    remainingamount = budget - answer;
    final=members*normalprice;
    newvalue = remainingamount - final;
    }

     if (( members >= 5 && members <=9) && ticket == "vip")
    {answer = budget * 0.6;
    remainingamount = budget - answer;
    final=members*vipprice;
    newvalue = remainingamount - final;
    }


    

     if (( members >= 10 && members <=24 ) && ticket == "vip")
    {answer = budget * 0.5;
    remainingamount = budget - answer;
    final=members*vipprice;
    newvalue = remainingamount - final;
    }


    
     if (( members >= 10 && members <=24 ) && ticket == "normal")
    {answer = budget * 0.5;
    remainingamount = budget - answer;
    final=members*normalprice;
    newvalue = remainingamount - final;
    }

    
    

    if (( members >= 25 && members <= 49 ) && ticket == "vip")
    {answer = budget * 0.4;
    remainingamount = budget - answer;
    final=members*vipprice;
    newvalue = remainingamount - final;
    }


    if (( members >= 25 && members <=49 ) && ticket == "normal")
    {answer = budget * 0.4;
    remainingamount = budget - answer;
    final=members*normalprice;
    newvalue = remainingamount - final;
    }

    
    if ( members >=50  && ticket == "vip")
    {answer = budget * 0.25;
    remainingamount = budget - answer;
    final=members*vipprice;
    newvalue = remainingamount - final;
    }


    if ( members >= 50 && ticket == "normal")
    {answer = budget * 0.25;
    remainingamount = budget - answer;
    final=members*normalprice;
    newvalue = remainingamount - final;
    }


    return newvalue;
    }


   

    


   

    




















    
     


     

