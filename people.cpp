#include "PEOPLE.h"
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;
PEOPLE::PEOPLE(string n,string a,string p,int add)
{
    name=n;
    account=a;
    password=p;
    address=add;
    read_schedule();
    read_who();
}
string PEOPLE::changePassword()
{
    cout<<"Current password : "<<password<<endl;
    string changedP;
    cout<<"Change your password!"<<endl<<"Changed password : ";
    cin>>changedP;
    password=changedP;
    cout<<"Success!"<<endl;
    return changedP;
}
void PEOPLE::schedule()
{
    cout << "  (current people / required people) " << endl;
    cout << '_' << setfill('_') << setw(78) << '_' << endl;
    cout << '|' << setfill(' ') << setw(8) << '|' << setw(9) << "Monday " << '|' << setw(9) << " Tuesday " << '|' << setw(9) << "Wednesday" << '|' << setw(9)
         << " Thursday" << '|' << setw(9) << "Friday " << '|' << setw(9) << "Saturday" << '|' << setw(9) << " Sunday " << '|' << endl;
    cout << '_' << setfill('_') << setw(78) << '_' << endl;
    for(int i=0; i<3; i++)
    {
        if(i==0)
            cout << "|Morning" ;
        else if(i==1)
            cout << "| Middle" ;
        else
            cout << "|  Night" ;
        for(int j=0; j<7; j++)
        {
            cout << '|' << setfill(' ') << setw(4) << currentPeople[i][j] << '/' << requiredPeople[i][j] << setfill(' ') << setw(4) ;
            if(j==6)
                cout << '|';
        }
        cout << endl;
        if(i!=2)
        {
            for(int k=0;k<8;k++)
            {
                if(k == 0)
                    cout << '+' << setfill('-') << setw(7) << '-';
                else
                    cout << '+' << setfill('-') << setw(9) << '-';
                if(k==7)
                    cout<<'+';
            }
            cout<<endl;
        }
        else
            cout << '_' << setfill('_') << setw(78) << '_' << endl;
    }
}
void PEOPLE::read_schedule()
{
    ifstream fin;
    fin.open("schedule.txt");
    if(!fin)
    {
        cout<<"Falied"<<endl;
    }
    else
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<7; j++)
            {
                fin>>requiredPeople[i][j];
            }
        }
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<7; j++)
            {
                fin>>currentPeople[i][j];
            }
        }
    }
    fin.close();
}
void PEOPLE::write_schedule()
{
    ofstream fout;
    fout.open("schedule.txt");
    if(!fout)
    {
        cout<<"Failed"<<endl;
    }
    else
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<7; j++)
            {
                fout<<requiredPeople[i][j]<<" ";
            }
            fout<<endl;
        }
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<7; j++)
            {
                fout<<currentPeople[i][j]<<" ";
            }
            fout<<endl;
        }
    }
    fout.close();
}
void PEOPLE::read_who()
{
    ifstream fin;
    fin.open("WHO.txt");
    if(!fin)
    {
        cout<<"falied"<<endl;
    }
    else
    {
        for(int i=0; i<7; i++)
        {
            for(int j=0; j<3; j++)
            {
                getline(fin,who[i][j]);
            }
        }
    }
    fin.close();
}
void PEOPLE::write_who()
{
    ofstream fout;
    fout.open("WHO.txt",ios::out);
    if(!fout)
    {
        cout<<"Falied"<<endl;
    }
    else
    {
        for(int i=0; i<7; i++)
        {
            for(int j=0; j<3; j++)
            {
                fout<<who[i][j]<<endl;
            }
        }
    }
    fout.close();
}
