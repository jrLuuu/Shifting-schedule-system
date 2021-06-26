#include"BOSS.h"
#include"People.h"
#include<fstream>
#include<string>
#include<vector>
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cctype>
using namespace std;
void BOSS::createNewBoss(vector<string> NAME,vector<string> ACCOUNT,vector<string> PASSWORD)
{
    string newN,newA;
    cout<<"Create a new boss account!"<<endl<<"User Name : ";
    cin>>newN;
    cout<<"New account(Enter 8 characters without special characters) : ";
    cin>>newA;
    NAME.push_back(newN);
    ACCOUNT.push_back(newA);
    PASSWORD.push_back("newBoss");
    cout<<"Success!"<<endl;
    write_data(NAME,ACCOUNT,PASSWORD);
    total+=1;
}
void BOSS::createNewStaff(vector<string> NAME,vector<string> ACCOUNT,vector<string> PASSWORD)
{
    string newN,newA;
    cout<<"Create a new staff account!"<<endl<<"User Name : ";
    cin>>newN;
    cout<<"New account(Enter 7 characters without special characters) : ";
    cin>>newA;
    NAME.push_back(newN);
    ACCOUNT.push_back(newA);
    PASSWORD.push_back("newStaff");
    cout<<"Success!"<<endl;
    write_data(NAME,ACCOUNT,PASSWORD);
    total+=1;
}
void BOSS::requiredWorkers()
{
    int people;
    string day,time,cap_day,cap_time;
    char YoN='y';
    while(YoN=='y'||YoN=='Y')
    {
        schedule();
        cout<<"Choose the day of the week and time"<<endl
            <<"Day(ex:Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday) : ";
        cin>>day;
        char days[100],times[100];
        for(int i=0; i<day.length(); i++)
        {
            days[i]=day[i];
            cap_day+=toupper(days[i]);
        }
        cout<<"Time(ex:Morning,Middle,Night) : ";
        cin>>time;
        for(int i=0; i<time.length(); i++)
        {
            times[i]=time[i];
            cap_time+=toupper(times[i]);
        }
        cout<<"How many people are needed? ";
        cin>>people;
        if(people>total)
        {
            cout<<"Exceed the number of people"<<endl;
        }
        else
        {
            if(cap_day == "MONDAY")
            {
                if(cap_time == "MORNING")
                {
                    requiredPeople[0][0]=people;
                    currentPeople[0][0]=0;
                    who[0][0]="Mon_morning: ";
                    cout<<"Success!"<<endl;
                }
                else if (cap_time == "MIDDLE")
                {
                    requiredPeople[1][0]=people;
                    currentPeople[1][0]=0;
                    who[0][0]="Mon_middle: ";
                    cout<<"Success!"<<endl;
                }
                else if(cap_time == "NIGHT")
                {
                    requiredPeople[2][0]=people;
                    currentPeople[2][0]=0;
                    who[0][2]="Mon_night: ";
                    cout<<"Success!"<<endl;
                }
                else
                {
                    cout<<"Input error"<<endl;
                }
            }
            else if(cap_day ==" TUESDAY")
            {
                if(cap_time == "MORNING")
                {
                    requiredPeople[0][1]=people;
                    currentPeople[0][1]=0;
                    who[1][0]="Tue_morning: ";
                    cout<<"Success!"<<endl;
                }
                else if (cap_time == "MIDDLE")
                {
                    requiredPeople[1][1]=people;
                    currentPeople[1][1]=0;
                    who[1][1]="Tue_middle:";
                    cout<<"Success!"<<endl;
                }
                else if(cap_time == "NIGHT")
                {
                    requiredPeople[2][1]=people;
                    currentPeople[2][1]=0;
                    who[1][2]="Tue_night: ";
                    cout<<"Success!"<<endl;
                }
                else
                {
                    cout<<"Input error"<<endl;
                }
            }
            else if(cap_day == "WEDNESDAY")
            {
                if(cap_time == "MORNING")
                {
                    requiredPeople[0][2]=people;
                    currentPeople[0][2]=0;
                    who[2][0]="Wed_morning: ";
                    cout<<"Success!"<<endl;
                }
                else if (cap_time == "MIDDLE")
                {
                    requiredPeople[1][2]=people;
                    currentPeople[1][2]=0;
                    who[2][1]="Wed_middle: ";
                    cout<<"Success!"<<endl;
                }
                else if (cap_time == "NIGHT")
                {
                    requiredPeople[2][2]=people;
                    currentPeople[2][2]=0;
                    who[2][2]="Wed_night: ";
                    cout<<"Success!"<<endl;
                }
                else
                {
                    cout<<"Input error"<<endl;
                }
            }
            else if(cap_day == "THURSDAY")
            {
                if(cap_time == "MORNING")
                {
                    requiredPeople[0][3]=people;
                    currentPeople[0][3]=0;
                    who[3][0]="Thu_morning: ";
                    cout<<"Success!"<<endl;
                }
                else if (cap_time == "MIDDLE")
                {
                    requiredPeople[1][3]=people;
                    currentPeople[1][3]=0;
                    who[3][1]="Thu_middle: ";
                    cout<<"Success!"<<endl;
                }
                else if(cap_time == "NIGHT")
                {
                    requiredPeople[2][3]=people;
                    currentPeople[2][3]=0;
                    who[3][2]="Thu_night: ";
                    cout<<"Success!"<<endl;
                }
                else
                {
                    cout<<"Input error"<<endl;
                }
            }
            else if(cap_day == "FRIDAY")
            {
                if(cap_time == "MORNING")
                {
                    requiredPeople[0][4]=people;
                    currentPeople[0][4]=0;
                    who[4][0]="Fri_morning: ";
                    cout<<"Success!"<<endl;
                }
                else if (cap_time == "MIDDLE")
                {
                    requiredPeople[1][4]=people;
                    currentPeople[1][4]=0;
                    who[4][1]="Fri_middle: ";
                    cout<<"Success!"<<endl;
                }
                else if(cap_time == "NIGHT")
                {
                    requiredPeople[2][4]=people;
                    currentPeople[2][4]=0;
                    who[4][2]="Fri_night: ";
                    cout<<"Success!"<<endl;
                }
                else
                {
                    cout<<"Input error"<<endl;
                }
            }
            else if(cap_day == "SATURDAY")
            {
                if(cap_time == "MORNING")
                {
                    requiredPeople[0][5]=people;
                    currentPeople[0][5]=0;
                    who[5][0]="Sat_morning: ";
                    cout<<"Success!"<<endl;
                }
                else if (cap_time == "MIDDLE")
                {
                    requiredPeople[1][5]=people;
                    currentPeople[1][5]=0;
                    who[5][1]="Sat_middle: ";
                    cout<<"Success!"<<endl;
                }
                else if(cap_time == "NIGHT")
                {
                    requiredPeople[2][5]=people;
                    currentPeople[2][5]=0;
                    who[5][2]="Sat_night: ";
                    cout<<"Success!"<<endl;
                }
                else
                {
                    cout<<"Input error"<<endl;
                }
            }
            else if(cap_day == "SUNDAY")
            {
                if(cap_time == "MORNING")
                {
                    requiredPeople[0][6]=people;
                    currentPeople[0][6]=0;
                    who[6][0]="Sun_morning: ";
                    cout<<"Success!"<<endl;
                }
                else if (cap_time == "MIDDLE")
                {
                    requiredPeople[1][6]=people;
                    currentPeople[1][6]=0;
                    who[6][1]="Sun_morning: ";
                    cout<<"Success!"<<endl;
                }
                else if(cap_time == "NIGHT")
                {
                    requiredPeople[2][6]=people;
                    currentPeople[2][6]=0;
                    who[6][2]="Sun_morning: ";
                    cout<<"Success!"<<endl;
                }
                else
                {
                    cout<<"Input error"<<endl;
                }
            }
            else
            {
                cout<<"Input error"<<endl;
            }
        }
        system("pause");
        system("cls");
        cout<<"Do you want to continue? Y or N ";
        cin>>YoN;
    }
    write_schedule();
}
void BOSS::fire(vector<string> NAME,vector<string> ACCOUNT,vector<string> PASSWORD)
{
    string N,A,P;
    int add;
    cout<<"Enter the name of the employee you want to delete."<<endl<<"User name : ";
    cin>>N;
    if(N!=name)
    {
        int siz=NAME.size(),jud=0;
        for(int i=0; i<siz; i++)
        {
            if(N==NAME[i])
            {
                jud=0;
                add=i;
                break;
            }
            else
                jud=1;
        }
        A=ACCOUNT[add],P=PASSWORD[add];
        if(jud==0)
        {
            for(vector<string>::iterator it=NAME.begin(); it!=NAME.end(); it++)
            {
                if((*it)==N)
                {
                    it=NAME.erase(it);
                    break;
                }
            }
            for(vector<string>::iterator it=ACCOUNT.begin(); it!=ACCOUNT.end(); it++)
            {
                if((*it)==A)
                {
                    it=ACCOUNT.erase(it);
                    break;
                }
            }
            for(vector<string>::iterator it=PASSWORD.begin(); it!=PASSWORD.end(); it++)
            {
                if((*it)==P)
                {
                    it=PASSWORD.erase(it);
                    break;
                }
            }
            cout<<"Success!"<<endl;
            write_data(NAME,ACCOUNT,PASSWORD);
            total-=1;
            erase_who(N);
        }
        else
        {
            cout<<"This person does not exist"<<endl;
        }
    }
    else
    {
        cout<<"Do not fire yourself! \n";
    }
}
void BOSS::write_data(vector<string> NAME,vector<string>ACCOUNT,vector<string>PASSWORD)
{
    ofstream fout;
    fout.open("data.txt",ios::out);
    if(!fout)
    {
        cout<<"Failed"<<endl;
    }
    else
    {
        int siz=NAME.size();
        for(int i=0; i<siz; i++)
        {
            fout<<NAME[i]<<" "<<ACCOUNT[i]<<" "<<PASSWORD[i]<<" "<<endl;
        }
    }
    fout.close();
}
void BOSS::erase_who(string N)
{
    int len=N.length(),pos=0,arr[7][3]= {0};
    for(int i=0; i<7; i++)
    {
        for(int j=0; j<3; j++)
        {
            int Len=who[i][j].length();
            for(int k=0; k<Len; k++)
            {
                if(who[i][j][k] == N[0])
                {
                    pos=k;
                    bool ft=false;
                    for(int L=0; L<len; L++)
                    {
                        if(who[i][j][k+L] !=N[L])
                        {
                            ft=false;
                            break;
                        }
                        else
                            ft=true;
                    }
                    if(ft)
                    {
                        who[i][j].erase(pos,len+1);
                        arr[i][j] = 1;
                        break;
                    }
                }
            }
        }
    }
    write_who();
    for(int i=0; i<3; i++)
    {

        for(int j=0; j<7; j++)
        {
            if(arr[j][i] == 1)
            {
                currentPeople[i][j] -= 1;
            }
        }
    }
    write_schedule();
}
