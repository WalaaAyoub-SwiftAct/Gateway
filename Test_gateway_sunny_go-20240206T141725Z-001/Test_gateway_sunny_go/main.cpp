#include <iostream>
#include "Destination_ECU_Info.h"
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include "Request_scheme.h"
#include"Test_cases.h"
using namespace std;


int main()
{
    /*string Destination_ECU="255.255.155.3";
    string Request="";
    Request_Scheme new_request;

    new_request.Source_IP="192.168.7.3";

    new_request.Destination_IP="192.168.7.2";

    new_request.Data_Scheme.emplace_back(Destination_ECU);

    new_request.Data_Scheme.emplace_back(Request);
    Destination_ECU_Info Des_ECU ;
    Des_ECU.Destination_ECU_IP=new_request.Data_Scheme[0];
    string i = Des_ECU.Get_ID();
    cout<<"ECU ID= "<<i<<"\n\n";*/
    Destination_ECU_Info Des_ECU ;
    Test_case_1(Des_ECU);
    Test_case_2(Des_ECU);
    Test_case_3(Des_ECU);
    Test_case_4(Des_ECU);
    Test_case_5();


}
