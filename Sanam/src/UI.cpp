#include "UI.h"
#include <windows.h>
#include <iostream>

using namespace std;

UI::UI()
{
   //Constructor
}


void UI::Init()
{
   /*Virtual Initializer*/
}

void UI::Update()
{
   /*Virtual Function*/
   ClearScreen();
   
   if(UserDataReceived != NULL)
      UserDataReceived();
}

void UI::Print(char *data)
{
   cout << data << endl;
}

void UI::ClearScreen()
{
   system("cls");
}

UI::~UI()
{
   //Destructor
}
