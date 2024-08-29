#include <iostream>
using namespace std;

string zodiacsign( string month, int date);

main()
{
    int date;
    string month;
    string  result;

    cout << "Enter your date of birth : ";
    cin >> date;
    cout << "Enter your month of birth : ";
    cin >> month;
    result = zodiacsign( month,  date);
    cout << "Your zodiac sign is " << result;


}

string zodiacsign( string month, int date)
{
    string star;
    if((date>= 21 && month == "march") || (date<= 19 && month == "april"))
    {
        star = "ARIES";
    }

    else if((date>= 20 && month == "april") || (date<= 20 && month == "may"))
   { 
    star = "TAURAS";
   }

    else if((date>= 21 && month == "may") || (date<= 20 && month == "june"))
    {
        star = "GEMINI";
    }

    if((date>= 21 && month == "june") || (date<= 22 && month == "july"))
    {
    star = "CANCER";
    }

    if((date>= 23 && month == "july") || (date<= 22 && month == "august"))
    {
        star = "LEO";
    }

    if((date>= 23 && month == "august") || (date<= 22 && month == "september"))
    {
        star = "VIRGO";
    }

    if((date>= 23 && month == "september") || (date<= 22 && month == "october"))
    {
        star = "LIBRA";
    }

    if((date>= 23 && month == "october") || (date<= 21 && month == "november"))
    {
        star = "SCORPIO";
    }
    if((date>= 22 && month == "november") || (date<= 21 && month == "december"))
    {
        star = "SAGGITARIUS";
    }
    if((date>= 22 && month == "december") || (date<= 19 && month == "january"))
    {
        star = "CAPRICORN";
    }
    if((date>= 20 && month == "january") || (date<= 18 && month == "february"))
    {
        star = "AQUARIUS";
    }
    if((date>= 19 && month == "february") || (date<= 20 && month == "march"))
    {
        star = "PISCES";
    }

    return star;














    
    




}