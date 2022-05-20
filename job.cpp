#include "job.h"
#include <cstring>

Job::Job(){
    jobID=0;   
    strcpy(jobTitle,"");
    strcpy(jobType,""); 
    strcpy(jobType,"");
    jobSalary=0;
    strcpy(jobDescription,"");
    strcpy(jobSalaryBasis,""); 
}
void Job::setJobDetails(int tjobID,const char tjobTitle[],const char tjobType[],const char tjobDescription[],const char tjobSalaryBasis[] )
{
    jobID=tjobID;   
    strcpy(jobTitle,tjobTitle);
    strcpy(jobType,tjobType); 
    strcpy(jobType,tjobType);
    strcpy(jobDescription,tjobDescription);
    strcpy(jobSalaryBasis,tjobSalaryBasis);
  
}
float Job::calculateSalary(){
    return jobSalary;
}

void Job::displayJobDetails(){
    
}

void Job::applyJob()
{
  jSeeker[0] = new JobSeeker();
  jSeeker[1] = new JobSeeker();
}

void Job::provideJob()
{
  jProvider[0] = new JobProvider();
  jProvider[1] = new JobProvider();
}

Job::~Job(){
  //Destructor
}