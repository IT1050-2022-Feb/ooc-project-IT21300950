//IT21302626	Prasadi P. G. K. R.


#ifndef COMPLAINT_H
#define COMPLAINT_H

#include "registeredUser.h"

class RegisteredUser;
class JobSeeker;
class JobProvider;

class Complaint{

    private:
    int complaintID;
    char complaintTitle[20];

    RegisteredUser* regUser;
    JobSeeker* jobSeeker;
    JobProvider* jobProvider;

    public:
    Complaint();//constructor
    void disComplaintDetails();
    ~Complaint();//destructor
};

#endif