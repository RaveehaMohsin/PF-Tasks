#include <iostream>
#include <windows.h>
using namespace std;

void printmaze();
void gotoxy(int x, int y);
void playermove(int x, int y);

main()

{

system("cls");
printmaze();

int x = 8;
int y = 11;
playermove(x,y);



}

void printmaze()

{

cout << " ############################################################ " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " ############################################################ " << endl;



}









void gotoxy(int x, int y)

{

COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}


void playermove(int x, int y)

{


gotoxy(x-1,y);
cout << " ";
gotoxy(x,y);
cout << "P";
Sleep(1000);

}




