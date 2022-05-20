//IT21302176	Amarasinghe A. A. S. U.

#include "jobProvider.h"
#include <cstring>

JobProvider::JobProvider()
{
    strcpy (custUsername,"");
    strcpy (custPassword,"");
}

JobProvider::JobProvider(const char jpcustUsername[],const char jpcustPassword[])
{
    strcpy (custUsername,jpcustUsername);
    strcpy (custPassword,jpcustPassword);
}
void JobProvider::addRegisteredUser(RegisteredUser* rg1, RegisteredUser* rg2)
{
  regu[0] = rg1;
  regu[1] = rg2;
}
void JobProvider::providerLogin()
{
    
}
void JobProvider::displayProviderDetails()
{
    
}

void JobProvider::selectResume(Resume* r)
{
  
}

JobProvider::~JobProvider()
{
    
}