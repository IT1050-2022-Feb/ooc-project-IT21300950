#ifndef RESUME_H
#define RESUME_H

class Resume
{
private:
    int resumeID;
    char resumeTitle[20];
public:
    Resume();
    Resume( int presumeID, const char presumeTitle[] );
    void disResumeDetails();
    ~Resume();
};

#endif
