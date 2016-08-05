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
	     // Sub-menu declarations...
	     void newAdmission();
		 void search();
		 void memberManager();
		 void modifyMember();
		 void report();

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

int main()  // Change it to void main...
{ 

	openingCredits();
	loadingSequence();
	mainMenu();
		
}


//*****************************************************************************************
// All the definitions of all the functions...
//*****************************************************************************************

void openingCredits()
{

}

    // Menu definitions...

void passwordMenu()
{
}

void mainMenu()
{
}

    // Sub-menu definitions...

void newAdmission()
{
}

void search()
{
}

void memberManager()
{
}

void modifyMember()
{
}

void report()
{
}

    // Helper tool definitions...

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
