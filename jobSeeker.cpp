//IT21301322	Pemachandra T. H. R. T.

#include "jobSeeker.h"
#include <cstring>

using namespace std;

JobSeeker::JobSeeker()
{
    strcpy (custUsername,"");
    strcpy (custPassword,"");
}
JobSeeker::JobSeeker(const char jscustUsername[],const char jscustPassword[])
{
    strcpy (custUsername,jscustUsername);
    strcpy (custPassword,jscustPassword);
}

void JobSeeker::addRegisteredUser(RegisteredUser* rg1, RegisteredUser* rg2)
{
  regu[0] = rg1;
  regu[1] = rg2;
}

void JobSeeker::seekerLogin()
{
    
}


void JobSeeker::displaySeekerDetails()
{

}

void JobSeeker::uploadResume(Resume *R)
{
  
}


JobSeeker::~JobSeeker()
{
    
}