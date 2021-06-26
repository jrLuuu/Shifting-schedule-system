#include"STAFF.h"
#include"People.h"
#include<fstream>
#include<string>
#include<vector>
#include<iostream>
#include<iomanip>
#include<cctype>
using namespace std;
void STAFF::check()
{
    int len=name.length(),L=0;
    string day,time,cap_day,cap_time;
    cout<<"Choose the day of the week and time."<<endl
        <<"Day(ex:Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday) : ";
    cin>>day;
    char days[100],times[100];
    for(int i=0;i<day.length();i++)
    {
        days[i]=day[i];
        cap_day+=toupper(days[i]);
    }
    cout<<"Time(ex:Morning,Middle,Night) : ";
    cin>>time;
    for(int i=0;i<time.length();i++)
    {
        times[i]=time[i];
        cap_time+=toupper(times[i]);
    }
    bool ft=false;
    if(cap_day == "MONDAY")
    {
        if(cap_time == "MORNING")
        {
            int siz=who[0][0].length();
            for(int i=0; i<siz; i++)
            {
                if(who[0][0][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[0][0][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
        }
        else if (cap_time =="MIDDLE")
        {
            int siz=who[0][1].length();
            for(int i=0; i<siz; i++)
            {
                if(who[0][1][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[0][1][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
        }
        else if(cap_time =="NIGHT")
        {
            int siz=who[0][2].length();
            for(int i=0; i<siz; i++)
            {
                if(who[0][2][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[0][2][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
        }
        else
        {
            cout<<"Input error"<<endl;
        }
    }
    else if(cap_day == "TUESDAY")
    {
        if(cap_time == "MORNING")
        {
            int siz=who[1][0].length();
            for(int i=0; i<siz; i++)
            {
                if(who[1][0][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[1][0][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
        }
        else if (cap_time =="MIDDLE")
        {
            int siz=who[1][1].length();
            for(int i=0; i<siz; i++)
            {
                if(who[1][1][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[1][1][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
        }
        else if(cap_time =="NIGHT")
        {
            int siz=who[1][2].length();
            for(int i=0; i<siz; i++)
            {
                if(who[1][2][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[1][2][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
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
            int siz=who[2][0].length();
            for(int i=0; i<siz; i++)
            {
                if(who[2][0][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[2][0][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
        }
        else if (cap_time =="MIDDLE")
        {
            int siz=who[2][1].length();
            for(int i=0; i<siz; i++)
            {
                if(who[2][1][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[2][1][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
        }
        else if (cap_time =="NIGHT")
        {
            int siz=who[2][1].length();
            for(int i=0; i<siz; i++)
            {
                if(who[2][1][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[2][1][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
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
            int siz=who[3][0].length();
            for(int i=0; i<siz; i++)
            {
                if(who[3][0][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[3][0][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
        }
        else if (cap_time =="MIDDLE")
        {
            int siz=who[3][1].length();
            for(int i=0; i<siz; i++)
            {
                if(who[3][1][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[3][1][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
        }
        else if(cap_time =="NIGHT")
        {
            int siz=who[3][2].length();
            for(int i=0; i<siz; i++)
            {
                if(who[3][2][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[3][2][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
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
            int siz=who[4][0].length();
            for(int i=0; i<siz; i++)
            {
                if(who[4][0][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[4][0][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
        }
        else if (cap_time =="MIDDLE")
        {
            int siz=who[4][1].length();
            for(int i=0; i<siz; i++)
            {
                if(who[4][1][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[4][1][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
        }
        else if(cap_time =="NIGHT")
        {
            int siz=who[4][2].length();
            for(int i=0; i<siz; i++)
            {
                if(who[4][2][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[4][2][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
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
            int siz=who[5][0].length();
            for(int i=0; i<siz; i++)
            {
                if(who[5][0][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[5][0][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
        }
        else if (cap_time =="MIDDLE")
        {
            int siz=who[5][1].length();
            for(int i=0; i<siz; i++)
            {
                if(who[5][1][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[5][1][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
        }
        else if(cap_time =="NIGHT")
        {
            int siz=who[5][2].length();
            for(int i=0; i<siz; i++)
            {
                if(who[5][2][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[5][2][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
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
            int siz=who[6][0].length();
            for(int i=0; i<siz; i++)
            {
                if(who[6][0][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[6][0][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
        }
        else if (cap_time =="MIDDLE")
        {
            int siz=who[6][1].length();
            for(int i=0; i<siz; i++)
            {
                if(who[6][1][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[6][1][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
        }
        else if(cap_time =="NIGHT")
        {
            int siz=who[6][2].length();
            for(int i=0; i<siz; i++)
            {
                if(who[6][2][i]==name[0])
                {
                    for(int j=0; j<len; j++)
                    {
                        if(who[6][2][i+j]==name[j])
                        {
                            ft=true;
                        }
                        else
                        {
                            ft=false;
                            break;
                        }
                    }
                    if(ft)
                    {
                        break;
                    }
                }
            }
            if(ft)
            {
                cout<<"Check in successfully."<<endl;
            }
            else
            {
                cout<<"You don't have to go to work at this time"<<endl;
            }
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
void STAFF::choose()
{

    char YoN='y';
    while(YoN=='y'||YoN=='Y')
    {
        string day,time,cap_day,cap_time;
        schedule();
        cout<<"Choose the day of the week and time"<<endl<<"Day(ex:Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday) : ";
        cin>>day;
        char days[100],times[100];
        for(int i=0;i<day.size();i++)
        {
            days[i]=day[i];
            cap_day+=toupper(days[i]);
        }
        cout<<"Time(ex:Morning,Middle,Night) : ";
        cin>>time;
        for(int i=0;i<time.size();i++)
        {
            times[i]=time[i];
            cap_time+=toupper(times[i]);
        }
        bool ft=false;
        if(cap_day == "MONDAY")
        {
            if(cap_time == "MORNING")
            {
                if(currentPeople[0][0]<requiredPeople[0][0])
                {
                    if(who[0][0]=="Mon_morning: "||who[0][0]=="")
                    {
                        who[0][0]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[0][0].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[0][0][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[0][0][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[0][0]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[0][0]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
            }
            else if (cap_time == "MIDDLE")
            {
                if(currentPeople[1][0]<requiredPeople[1][0])
                {
                    if(who[0][1]=="Mon_middle: "||who[0][1]=="")
                    {
                        who[0][1]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[0][1].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[0][1][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[0][1][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[0][1]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[1][0]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
            }
            else if(cap_time == "NIGHT")
            {
                if(currentPeople[2][0]<requiredPeople[2][0])
                {

                    if(who[0][2]=="Mon_night: "||who[0][2]=="")
                    {
                        who[0][2]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[0][2].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[0][2][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[0][2][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[0][2]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[2][0]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
                }
            else
            {
                cout<<"Input error"<<endl;
            }
        }
        else if(cap_day == "TUESDAY")
        {
            if(cap_time == "MORNING")
            {
                if(currentPeople[0][1]<requiredPeople[0][1])
                {
                    if(who[1][0]=="Tue_morning: "||who[1][0]=="")
                    {
                        who[1][0]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[1][0].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[1][0][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[1][0][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[1][0]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[0][1]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
            }
            else if (cap_time == "MIDDLE")
            {
                if(currentPeople[1][1]<requiredPeople[1][1])
                {

                    if(who[1][1]=="Tue_middle: "||who[1][1]=="")
                    {
                        who[1][1]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[1][1].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[1][1][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[1][1][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[1][1]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[1][1]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
            }
            else if(cap_time == "NIGHT")
            {
                if(currentPeople[2][1]<requiredPeople[2][1])
                {

                    if(who[1][2]=="Tue_nidht: "||who[1][2]=="")
                    {
                        who[1][2]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[1][2].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[1][2][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[1][2][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[1][2]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[2][1]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
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
                if(currentPeople[0][2]<requiredPeople[0][2])
                {

                    if(who[2][0]=="Wed_morning: "||who[2][0]=="")
                    {
                        who[2][0]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[2][0].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[2][0][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[2][0][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[2][0]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[0][2]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
            }
            else if (cap_time == "MIDDLE")
            {
                if(currentPeople[1][2]<requiredPeople[1][2])
                {

                    if(who[2][1]=="Wed_middle: "||who[2][1]=="")
                    {
                        who[2][1]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[2][1].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[2][1][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[2][1][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[2][1]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[1][2]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
            }
            else if (cap_time == "NIGHT")
            {
                if(currentPeople[2][2]<requiredPeople[2][2])
                {
                    if(who[2][2]=="Wed_night: "||who[2][2]=="")
                    {
                        who[2][2]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[2][2].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[2][2][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[2][2][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[2][2]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[2][2]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
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
                if(currentPeople[0][3]<requiredPeople[0][3])
                {
                    if(who[3][0]=="Thu_morning: "||who[3][0]=="")
                    {
                        who[3][0]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[3][0].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[3][0][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[3][0][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[3][0]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[0][3]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
            }
            else if (cap_time == "MIDDLE")
            {
                if(currentPeople[1][3]<requiredPeople[1][3])
                {

                    if(who[3][1]=="Thu_middel: "||who[3][1]=="")
                    {
                        who[3][1]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[3][1].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[3][1][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[3][1][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[3][1]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[1][3]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
            }
            else if(cap_time == "NIGHT")
            {
                if(currentPeople[2][3]<requiredPeople[2][3])
                {
                    if(who[3][2]=="Thu_night: "||who[3][2]=="")
                    {
                        who[3][2]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[3][2].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[3][2][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[3][2][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[3][2]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[2][3]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
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
                if(currentPeople[0][4]<requiredPeople[0][4])
                {
                    if(who[4][0]=="Fri_morning: "||who[4][0]=="")
                    {
                        who[4][0]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[4][0].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[4][0][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[4][0][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[4][0]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[0][4]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
            }
            else if (cap_time == "MIDDLE")
            {
                if(currentPeople[1][4]<requiredPeople[1][4])
                {
                    if(who[4][1]=="Fri_middle: "||who[4][1]=="")
                    {
                        who[4][1]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[4][1].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[4][1][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[4][1][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[4][1]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[1][4]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
            }
            else if(cap_time == "NIGHT")
            {
                if(currentPeople[2][4]<requiredPeople[2][4])
                {

                    if(who[4][2]=="Fri_night: "||who[4][2]=="")
                    {
                        who[4][2]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[4][2].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[4][2][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[4][2][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[4][2]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[2][4]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
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
                if(currentPeople[0][5]<requiredPeople[0][5])
                {
                    if(who[5][0]=="Sat_morning: "||who[5][0]=="")
                    {
                        who[5][0]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[5][0].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[5][0][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[5][0][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[5][0]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[0][5]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
            }
            else if (cap_time == "MIDDLE")
            {
                if(currentPeople[1][5]<requiredPeople[1][5])
                {
                    if(who[5][1]=="Sat_middle: "||who[5][1]=="")
                    {
                        who[5][1]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[5][1].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[5][1][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[5][1][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[5][1]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[1][5]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
            }
            else if(cap_time == "NIGHT")
            {
               if(currentPeople[2][5]<requiredPeople[2][5])
                {
                    if(who[5][2]=="Sat_night: "||who[5][2]=="")
                    {
                        who[5][2]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[5][2].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[5][2][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[5][2][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[5][2]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[2][5]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
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
                if(currentPeople[0][6]<requiredPeople[0][6])
                {

                    if(who[6][0]=="Sun_morning: "||who[6][0]=="")
                    {
                        who[6][0]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[6][0].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[6][0][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[6][0][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[6][0]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[0][6]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
            }
            else if (cap_time == "MIDDLE")
            {
                if(currentPeople[1][6]<requiredPeople[1][6])
                {
                    if(who[6][1]=="Sun_middle: "||who[6][1]=="")
                    {
                        who[6][1]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[6][1].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[6][1][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[6][1][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[6][1]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[1][6]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
            }
            else if(cap_time == "NIGHT")
            {
                if(currentPeople[2][6]<requiredPeople[2][6])
                {
                    if(who[6][2]=="Sun_night: "||who[6][2]=="")
                    {
                        who[6][2]+=name;
                        ft=false;
                    }
                    else
                    {
                        int Len=who[6][2].length();
                        for(int i=0;i<Len; i++)
                        {
                            if(who[6][2][i]==name[0])
                            {
                                int len=name.length();
                                for(int j=0;j<len;j++)
                                {
                                    if(who[6][2][i+j]!=name[j])
                                    {
                                        ft=false;
                                        break;
                                    }
                                    else
                                    {
                                        ft=true;
                                    }
                                }
                                if(ft)
                                    break;
                            }
                        }
                        if(!ft)
                        {
                            who[6][2]+="."+name;
                            ft=false;
                        }
                    }
                    if(!ft)
                    {
                        currentPeople[2][6]+=1;
                        cout<<"Success!"<<endl;
                    }
                    else
                    {
                        cout<<"You repeatedly selected\n";
                    }
                }
                else
                {
                    cout<<"The number of people has exceeded, please select again!"<<endl;
                }
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
        write_schedule();
        write_who();
        system("pause");
        system("cls");
        cout<<"Do you want to continue? Y or N ";
        cin>>YoN;
    }
}
