#ifndef REGISTEREDUSER_H
#define REGISTEREDUSER_H

#include "guestUser.h"

#include "resume.h"
#include "complaint.h"
#define SIZE 2

class Job;
class Complaint;
class Resume;
class GuestUser;

class RegisteredUser : GuestUser //Inheritance relationship with GuestUserClass

{
	protected:
		
		char custUsername[20];
		char custPassword[20];
		Complaint * cmplt[SIZE]; // Bi-directional Association with complaint class
		
		
	
public:
		RegisteredUser();
		RegisteredUser(int pcustID,const char pcustName[],const char pcustEmail[],const char pcustTel,const char pcustAddress[],const char userName[],const char password[] );
		void displayRegiDetails();
		void searchJob(Job* J); //Dependancy relationship with Job class
		void uploadResume(Resume* R); //Dependancy relationship with Resume class
    ~RegisteredUser();
	
	
};

#endif
