# include "registeredUser.h"
# include<cstring>

RegisteredUser::RegisteredUser(){
	
   strcpy (custUsername,"");
   strcpy (custPassword,"");
	

}

RegisteredUser::RegisteredUser(int pcustID,const char pcustName[],const char pcustEmail[],const char pcustTel,const char pcustAddress[], const char userName[], const char password[] )
{
	
   strcpy (custUsername,userName);
   strcpy (custPassword,password);
	
}

void RegisteredUser::displayRegiDetails( )
{
	
}

void RegisteredUser::searchJob(Job* J)
{
  
}

void RegisteredUser::uploadResume(Resume* R) 
{
  
}

RegisteredUser::~RegisteredUser()
{
	
}





 
	 
