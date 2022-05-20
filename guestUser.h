#ifndef GUESTUSER_H
#define GUESTUSER_H

class RegisteredUser;

class GuestUser
{
protected:
    int custID;
    char custName[20];
    char custEmail[40];
    char custTel[10];
    char custAddress[40];



public:
    GuestUser();
    GuestUser( int pcustID, const char pcustName[], const char pcustEmail[], const char pcustTel[], const char pcustAddress[] );
    void displayGuestDetails();
    void addRegisteredUser();
    ~GuestUser();
};

#endif



