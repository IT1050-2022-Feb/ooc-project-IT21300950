//IT21300950	Vithanage V. K. M.

#include <cstring>
#include "guestUser.h"
#include <iostream>
using namespace std;

GuestUser::GuestUser()
{
    custID = 0;
    strcpy(custName, "");
    strcpy(custEmail, "");
    strcpy(custTel, "0000000000");
    strcpy(custAddress, "");
}

GuestUser::GuestUser( int pcustID, const char pcustName[], const char pcustEmail[], const char pcustTel[], const char pcustAddress[] )
{
    custID = pcustID;
    strcpy( custName, pcustName );
    strcpy( custEmail, pcustEmail );
    strcpy( custTel, pcustTel );
    strcpy( custAddress, pcustAddress );
}

void GuestUser::addRegisteredUser()
{

}

void GuestUser::displayGuestDetails()
{
    
}

GuestUser::~GuestUser()
{
    //destructor
}
