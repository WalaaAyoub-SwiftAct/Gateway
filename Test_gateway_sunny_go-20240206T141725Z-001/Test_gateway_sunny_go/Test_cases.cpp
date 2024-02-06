#include <iostream>
#include <memory>
#include <string>
#include "Destination_ECU_Info.h"
#include "Request_scheme.h"
#include "Test_cases.h"
using namespace std;

void Test_case_1(Destination_ECU_Info object ){

object.Destination_ECU_IP="255.255.255.1";

if(object.Get_ID()=="1"){
 cout<<"Test case 1 passed \t  Returned correct ID for specific IP  \n";
}
else{
cout<<"Test case 1 Failed \n";
}
}
void Test_case_2(Destination_ECU_Info object){

object.Destination_ECU_IP="255.255.255.2";

if(object.Get_ID()=="2"){
  cout<<"Test case 2 passed \t  Returned correct ID for specific IP \n";
}
else{
cout<<"Test case 2 Failed \n";
}
}
void Test_case_3(Destination_ECU_Info object){

object.Destination_ECU_IP="255.255.255.3";

if(object.Get_ID()=="3"){
  cout<<"Test case 3 passed \t  Returned correct ID for specific IP \n";
}
else{
cout<<"Test case 3 Failed \n";
}
}
void Test_case_4(Destination_ECU_Info object){

object.Destination_ECU_IP="255.255.125.3";

if(object.Get_ID()=="-1"){
  cout<<"Test case 4 passed  \t Return -1  for invalid IP\n";
}
else{
cout<<"Test case 4 Failed \n";
}
}
void Test_case_5(){
    string Destination_ECU="255.255.255.3";
    string Request="";
    Request_Scheme new_request;

    new_request.Source_IP="192.168.7.3";

    new_request.Destination_IP="192.168.7.2";

    new_request.Data_Scheme.emplace_back(Destination_ECU);

    new_request.Data_Scheme.emplace_back(Request);
    Destination_ECU_Info Des_ECU ;
    Des_ECU.Destination_ECU_IP=new_request.Data_Scheme[0];
    if(Des_ECU.Get_ID()=="3"){
        cout<<"Test case 5 passed  \t Passing the correct Destination IP And return correct ID \n";
    }
    else{ cout<<"Test case 5 Failed \n";}

}
