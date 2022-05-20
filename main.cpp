#include "complaint.h"
#include "guestUser.h"
#include "job.h"
#include "jobSeeker.h"
#include "registeredUser.h"
#include "resume.h"
#include "jobProvider.h"

#include <iostream>

using namespace std;

int main()
{

    GuestUser* gu = new GuestUser();
    JobSeeker* js = new JobSeeker(); //object - JobSeeker class
    JobProvider* jp = new JobProvider();
    Job* j;
    Complaint* com;
    Resume* res;
    RegisteredUser* rUser1 = new RegisteredUser();
    RegisteredUser* rUser2 = new RegisteredUser();//object RegisteredUser

    gu->displayGuestDetails();
    gu->addRegisteredUser();
    js->seekerLogin();
    js->displaySeekerDetails();
    js->uploadResume(res);
    js->addRegisteredUser(rUser1, rUser2);
    jp->providerLogin();
    jp->displayProviderDetails();
    jp->addRegisteredUser(rUser1, rUser2);
    jp->selectResume(res);
    j->displayJobDetails();
    res->disResumeDetails();
    rUser1->displayRegiDetails();
	  rUser1->searchJob(j);
	  rUser1->uploadResume(res);


    delete gu;
    delete js;
    delete j;
    delete com;
    delete res;
   	delete rUser1;


    return 0;
}