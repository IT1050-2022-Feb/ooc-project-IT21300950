#ifndef JOBSEEKER_H
#define JOBSEEKER_H

#define SIZE 2
#include "registeredUser.h"


class Complaint;
class Resume;
class RegisteredUser;

class JobSeeker : public RegisteredUser
{
    private:
        Complaint* cmplt;
        RegisteredUser* regu[SIZE];
    public:
        JobSeeker();
        JobSeeker(const char jscustUsername[],const char       jscustPassword[]);
        void seekerLogin();
        void displaySeekerDetails();
        void addRegisteredUser(RegisteredUser* rg1, RegisteredUser* rg2);
        void uploadResume(Resume *R);
        ~JobSeeker();
    
};

#endif