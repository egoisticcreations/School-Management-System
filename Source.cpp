#include <iostream>
#include <conio.h>
#include <string.h>
#include <Windows.h>

using namespace std;

//Menu Function Declarations...
//*****************************************************************************************

    void openingCredits();
	void passwordMenu();
	void mainMenu();

//All Tool Declarations...
//*****************************************************************************************
	void borderCreator();
	void gotoxy(int col, int row) 
	{
			SetCursorPos(col, row);
	} 	
	// Remove "void gotoxy()" in the final program..
	void loadingSequence();

	//Support Tool Declarations...
	//**************************************************************************************
	void waitFunction(int x);



//Main Program...

int main()
{ 
	char x='a';	
	gotoxy(4, 4);
	cout << "Hellow.." << endl;

	loadingSequence();
	
	while (x != 'y')
	{
		cout << "Do you wanna exit ?";
		cin >> x;
	}
		
}

// At the start of the program , this shows the initial details (credits) of the program..
//*****************************************************************************************

void openingCredits()
{

}

//*****************************************************************************************

void passwordMenu()
{
}

// In the program , this shows the username and password input box logic for the pre-created user... 
// If the input username or password dosen't exist , it prompts to use a valid input..
//*****************************************************************************************

void mainMenu()
{
}

void borderCreator()
{
	gotoxy(1, 1);
	for (int i = 1; i < 11;i++)
	{
		if(i==1)
			for (int j = 1; j < 10; i++)
		{
			gotoxy(1, i);
			cout << "*";
		}
		else
		{
			gotoxy(i, 1);
			cout << "*";
			gotoxy(i, 10);
			cout << "*";
		}
	}
	gotoxy(1,1);

}

void loadingSequence()
{
	for (int x = 0; x < 26; x++)
		for (int y = 0; y < 80; y++)
		{
			waitFunction(10000000000000);
			gotoxy(x, y);
			cout << "*";
		}
}

void waitFunction(int x)
{
	int j = 0;
	
	for (int i = 1; i < x; i++);
	
}
