#ifndef BOSS_H
#define BOSS_H
#endif

#include "People.h"
#include <string>
#include <vector>
using namespace std;
class BOSS:public PEOPLE
{
private:
    int total;
public:
    BOSS(string n,string a,string p,int add,int t):PEOPLE(n,a,p,add)
    {
        total=t;
    }
    void createNewBoss(vector<string>,vector<string>,vector<string>);
    void createNewStaff(vector<string>,vector<string>,vector<string>);
    void requiredWorkers();
    void fire(vector<string>,vector<string>,vector<string>);
    void write_data(vector<string>,vector<string>,vector<string>);
    void erase_who(string);
};
