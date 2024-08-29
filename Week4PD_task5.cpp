#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);

main ()


{

gotoxy(5,6);
         cout << "******      ****   ***     ***      ********     ********     ***    ***       ****        ";gotoxy(5,7);
         cout << "*   **     **  **   **     **       *            *            ***    ***     **    **      " ; gotoxy(5,8);
         cout << "*  **      **  **    **   **        *****        ****         **********     **    **      " ; gotoxy(5,9);
         cout << "***        ******     *   *         *            *            ***    ***     ********      " ;gotoxy(5,10);
         cout << "* **       **  **      * *          *            *            ***    ***     **    **      " ; gotoxy(5,11);
         cout << "*  ****    **  **       *           ********     ********     ***    ***     **    **      " ;gotoxy(5,12);






}



void gotoxy(int x, int y)

{

COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}




