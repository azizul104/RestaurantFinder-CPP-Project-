#ifndef RMS_UI_H
#define RMS_UI_H

#include <iostream>
#include "UI.h"

using namespace std;

class ResturentManUI : public UI
{
   private:
      string FoodType;
      string District;
      
   public:
      void Init();
      void Update();
      void ReadDistrictName()
      {
         cin >> District;
      }
      void ReadFoodType()
      {
         cin >> FoodType;
      }
      
      string GetFoodType()
      {
         return FoodType;
      }
      
      string GetDistrict()
      {
         return District;
      }

   protected:

};


#endif // RMS_UI_H
