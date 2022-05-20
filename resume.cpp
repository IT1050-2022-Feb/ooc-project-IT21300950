//IT21300950	Vithanage V. K. M.

#include <iostream>
#include "resume.h"
#include <cstring>
using namespace std;

Resume::Resume()
{
    resumeID = 0;
    strcpy(resumeTitle, "");
}

Resume::Resume( int presumeID, const char presumeTitle[] )
{
    resumeID = presumeID;
    strcpy(resumeTitle, presumeTitle);
}

void Resume::disResumeDetails()
{
    cout << resumeID << endl;
    cout << resumeTitle << endl;
}

Resume::~Resume()
{
    //destructor
}