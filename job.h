//IT21302626	Prasadi P. G. K. R.


#ifndef JOB_H
#define JOB_H
#define SIZE 2

#include "registeredUser.h"
#include "jobSeeker.h"
#include "jobProvider.h"

class Job
{
protected:
int jobID;
char jobTitle[10];
char jobType[10];
float jobSalary; 
char jobDescription[20];
char jobSalaryBasis[20];

JobSeeker * jSeeker[SIZE];
JobProvider * jProvider[SIZE];

public:
Job();//constructor
void setJobDetails(int tjobID,const char tjobTitle[],const char tjobType[],const char tjobDescription[],const char tjobSalaryBasis[] );
float calculateSalary();
void displayJobDetails();
void applyJob();
void provideJob();
~Job();//destructor
};
#endif