#ifndef DESTINATION_ECU_INFO_H
#define DESTINATION_ECU_INFO_H
#include <iostream>
#include <memory>
#include <vector>
#include <string>
using namespace std;

class Destination_ECU_Info
{
    public:
        Destination_ECU_Info();
        virtual ~Destination_ECU_Info();
        string Destination_ECU_IP="";
        string Get_ID();

    protected:

    private:
};

#endif // DESTINATION_ECU_INFO_H
