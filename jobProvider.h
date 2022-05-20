#ifndef JOBPROVIDER_H
#define JOBPROVIDER_H

#define SIZE 2
#include "registeredUser.h"


class Complaint;
class Resume;
class JobSeeker;


class JobProvider: public RegisteredUser
{
    private:
        Complaint * cmplt;
        JobSeeker * jbskr;
        RegisteredUser* regu[SIZE];
    public:
        JobProvider();
        JobProvider(const char jpcustUsername[],const char jpcustPassword[]);
        void providerLogin();
        void displayProviderDetails();
        void addRegisteredUser(RegisteredUser* rg1, RegisteredUser* rg2);
        void selectResume(Resume* r);
        ~JobProvider();
    
};

#endif