#ifndef staff_h
#define staff_h
#endif

#include "People.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class STAFF:public PEOPLE
{
public:
    STAFF(string n,string a,string p,int add):PEOPLE(n,a,p,add)
    {

    }
    void choose();
    void check();
};
