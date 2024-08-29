#include<iostream>
using namespace std;

void dressBuy(int price,string brand);

main()

{

  int price;
  string brand;
  cout <<"Enter the price = ";
  cin >> price;
  cout << "Enter the brand = ";
  cin >> brand;
  dressBuy(price,brand); 

}

void dressBuy(int price,string brand)

{

 if(price <= 1500 && brand == "breakout")
 {

    cout << "You can buy the dress.";
    
 }


 else
 {
    
    cout << "You cannot but the dress.";
    
  }


}

