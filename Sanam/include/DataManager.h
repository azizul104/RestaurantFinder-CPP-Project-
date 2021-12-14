#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <iostream>
#include <fstream>

using namespace std;

class DataManager
{
   public:
      DataManager();
      virtual ~DataManager();
      
      //ifstream file;
      
      string GetData(string district, string foodtype);

   protected:

   private:
};

#endif // DATAMANAGER_H
