#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
using namespace std;
class PEOPLE
{
protected:
    string name, account, password, who[7][3];
    int requiredPeople[3][7], currentPeople[3][7];
    int address;
public:
    PEOPLE(string,string,string,int);
    string changePassword();
    void schedule();
    void read_schedule();
    void write_schedule();
    void read_who();
    void write_who();
};

#endif
