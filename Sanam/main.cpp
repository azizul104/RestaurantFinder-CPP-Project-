#include <iostream>
#include "RMS_UI.h"
#include "DataManager.h"

using namespace std;


ResturentManUI rmu;
UI *ui = &rmu;

DataManager dm;

void OnUserDataReceived()
{
   /*Perform Action*/
   
   string district = ((ResturentManUI*)ui)->GetDistrict();
   string foodtype = ((ResturentManUI*)ui)->GetFoodType();
   
   string data = dm.GetData(district, foodtype);
   cout << data;
}

int main()
{
    
    
    /*Hook User Data Receive Event*/
    ui->UserDataReceived = OnUserDataReceived;
    
    /*Initialize UI*/
    ui->Init();
    
    
    while(1)
    {
       ui->Update();
    }
}
