#include "Destination_ECU_Info.h"
#include <iostream>
#include <memory>
#include <vector>
#include <string>
using namespace std;

Destination_ECU_Info::Destination_ECU_Info()
{

}

Destination_ECU_Info::~Destination_ECU_Info()
{
    //dtor
}

vector<vector<string>> Devices_info {
{"255.255.255.1","1"},

{"255.255.255.2","2"},

{"255.255.255.3","3"}

};

string Destination_ECU_Info::Get_ID()
{
    string Returned_ID="-1";
    string str2 = "255";
    int pos = 0;
    int index;
    vector <int> positions;

   while((index = this->Destination_ECU_IP.find(str2, pos)) != string::npos) {
      //cout << "Match found at position: " << index << endl;
      pos = index + 1; //new position is from next element of index
     positions.emplace_back (index);

   }
  if (positions[0]==0&&positions[1]==4&&positions[2]==8){
      for (int i = 0; i < Devices_info.size();i++)
        {
           for (int j = 0; j < Devices_info[i].size();j++)
            {
                if(Devices_info[i][j]==this->Destination_ECU_IP){

                 Returned_ID=Devices_info[i][j+1];

                 }
                 break;

              }

            if(Returned_ID!="-1"){
                   break;
                   }
            }}
    else{ cout<<this->Destination_ECU_IP<< " This ID  is not belong to our data base\n"; }

  return Returned_ID;


}
