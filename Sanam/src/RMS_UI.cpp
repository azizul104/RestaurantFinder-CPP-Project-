#include "RMS_UI.h"


void ResturentManUI::Update()
{
   Print("Please Enter Food Type: ");
   ReadFoodType();
   Print("Please Enter District Name: ");
   ReadDistrictName();
   
   UI::Update();
}

void ResturentManUI::Init()
{
   
}




