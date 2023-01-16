#include <iostream>
using namespace std;

float studio(string month,float stay);
float apartment(string month , float stay);

main()
{
    string month;
    float stay;
    float result1;
    float result2;
    cout << "Enter the month = ";
    cin >> month;
    cout << "Enter the number of stays = ";
    cin >> stay;
    result1 = studio( month,stay);
    cout << "STUDIO : " << result1;
     cout << endl;
    result2 = apartment( month , stay); 
    cout << "APARTMENT : " << result2;
    

}

float studio(string month,float stay)
{
    float answer;
    float discount1;
    float discount2;
    if((month =="may" || month == "october") && stay <= 7)
    {
        answer = 50*stay;
    }

    if((month =="may" || month == "october") && (stay > 7 && stay <= 14))
    {
        discount1 = 0.05 * 50;
        discount2 = 50 - discount1;
        answer = discount2 * stay;
    }

    if((month =="may" || month == "october") && stay > 14)
    {
        discount1 = 0.3 * 50;
        discount2 = 50 - discount1;
        answer = discount2 * stay;
    }

     if((month =="june" || month == "september") && stay <= 14)
    {
        
        answer = 75.20 * stay;
    }



    if((month =="june" || month == "september") && stay > 14)
    {
        discount1 = 0.2 * 75.20;
        discount2 = 75.20 - discount1;
        answer = discount2 * stay;
    }

    if(month =="july" || month == "august")
    {
        answer = 76*stay;
    }

    return answer;
}

float apartment(string month , float stay)
{
    float answer;
    float discount1;
    float discount2;

     if((month == "may" || month == "october") && stay <= 14)
    {
        answer = stay * 65;
    }

    
     if((month == "may" || month == "october") && stay > 14)
    {
        discount1 = 0.1 * 65;
        discount2 = 65 - discount1;
        answer = discount2 * stay;
    }

    
     if((month == "june" || month == "september") && stay <= 14)
    {
       
        answer = 68.70 * stay;
    }

     if((month == "june" || month == "september") && stay > 14)
    {
        discount1 = 0.1 * 68.70;
        discount2 = 68.70 - discount1;
        answer = discount2 * stay;
    }

     if((month == "july" || month == "august") && stay <= 14)
    {
       
        answer = 77.0 * stay;
    }

     if((month == "july" || month == "august") && stay > 14)
    {
        discount1 = 0.1 * 77;
        discount2 = 77 - discount1;
        answer = discount2 * stay;
    }





    return answer;
    
}










    

