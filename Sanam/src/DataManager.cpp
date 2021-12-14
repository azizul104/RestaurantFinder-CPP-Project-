#include "DataManager.h"
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

DataManager::DataManager()
{
   //Constructor
   
}

DataManager::~DataManager()
{
   //Destructor
   
   /*Close the file*/
   //file.close();
}


string DataManager::GetData(string district, string foodtype)
{
   string path = "Database/" + district + "/" + foodtype + "/" + "Table.txt";
   
   char cstr[path.size() + 1];
	strcpy(cstr, path.c_str());
   
   ifstream fs(cstr);
   
   if(fs.is_open() == false)
   {
      cout << "No record Found" << endl;
   }
   
   cout << "Rating\t" << "Price\t" << "Restaurant Name\t" << endl;
   std::string line;
   while (getline(fs, line)) 
   {
      cout << line.c_str() << endl;
   }
   
   cout << endl << endl;
   
   
   fs.close();
}
