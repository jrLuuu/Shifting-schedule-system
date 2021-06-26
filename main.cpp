#include "BOSS.h"
#include "STAFF.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <windows.h>
using namespace std;
vector<string>NAME;
vector<string>ACCOUNT;
vector<string>PASSWORD;
void SetColor(int color = 7)
{
  HANDLE hConsole;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole,color);
}
void read_data()
{
    NAME.clear();
    ACCOUNT.clear();
    PASSWORD.clear();
    string P;
    ifstream fin;
    fin.open("data.txt");
    if(!fin)
    {
        cout<<"Failed"<<endl;
    }
    else
    {
        string n,a,p;
        while(fin>>n)
        {
            fin>>a;
            fin>>p;
            NAME.push_back(n);
            ACCOUNT.push_back(a);
            PASSWORD.push_back(p);
        }
    }

    fin.close();
}
int main()
{
    string P;
    SetColor(14);
    while(cout<<"Welcome! Choose"<<endl<<"press 0 -> Exit page"<<endl<<"press 1 -> Sign in"<<endl<<endl
            <<"# Password of new boss/staff -> newBoss/newStaff"<<endl
            <<"If you are new here, make sure to change your password first!"<<endl<<endl<<"----> ")
    {
        read_data();
        cin>>P;
        system("cls");
        if(P=="0")
        {
            cout<<"Thanks, bye bye!"<<endl;
            break;
        }
        else if(P=="1")
        {
            char YoN='y';
            string n,a,p;
            int address;
            while(YoN=='Y'||YoN=='y')
            {
                cout<<"User name : ";
                cin>>n;
                cout<<"Account : ";
                cin>>a;
                cout<<"Password : ";
                cin>>p;
                SetColor(116);
                int siz=NAME.size();
                int judgeN=0,judgeA=0,judgeP=0;
                for(int i=0; i<siz; i++)
                {
                    if(n!=NAME[i])
                    {
                        judgeN=1;
                    }
                    else
                    {
                        address=i;
                        judgeN=0;
                        break;
                    }
                }
                if(judgeN==0)
                {
                    while(YoN=='Y'||YoN=='y')
                    {
                        if(a!=ACCOUNT[address])
                        {
                            judgeA=1;
                        }
                        else
                        {
                            judgeA=0;
                        }
                        if(judgeA==0)
                        {
                            while(YoN=='Y'||YoN=='y')
                            {
                                if(p!=PASSWORD[address])
                                {
                                    judgeP=1;
                                }
                                else
                                {
                                    judgeP=0;
                                    break;
                                }
                                if(judgeP==1)
                                {
                                    cout<<"Password error! Please try again!"<<endl;
                                    cout<<"Do you want to try it again? ------- Y/N ";
                                    cin>>YoN;
                                    if(YoN=='Y'||YoN=='y')
                                    {
                                        cout<<"Password : ";
                                        cin>>p;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                                else
                                {
                                    break;
                                }
                            }
                        }
                        else
                        {
                            cout<<"Account error! Please try again!"<<endl;
                            cout<<"Do you want to try it again? ------- Y/N ";
                            cin>>YoN;
                            if(YoN=='Y'||YoN=='y')
                            {
                                cout<<"Account : ";
                                cin>>a;
                                cout<<"Password : ";
                                cin>>p;
                            }
                            else
                            {
                                break;
                            }
                        }
                        if(judgeA==0&&judgeP==0)
                        {
                            break;
                        }
                    }
                }
                else
                {
                    cout<<"User name doesn't exist."<<endl
                        <<"Do you want to try it again? ------- Y/N ";
                    cin>>YoN;
                }
                if(YoN=='N'||YoN=='n')
                {
                    cout<<"Thank you~ Bye Bye~"<<endl;
                    system("pause");
                    system("cls");
                    break;
                }
                if(judgeN==0&&judgeA==0&&judgeP==0)
                {
                    cout<<"Welcome, "<<n<<"!"<<endl;
                    system("pause");
                    system("cls");
                    break;
                }
            }
            if(YoN=='Y'||YoN=='y')
            {
                if(a.length()<8)
                {
                    STAFF staff(n,a,p,address);
                    SetColor(113);
                    while(P!="6")
                    {
                        cout<<"Choose what to do! "<<endl
                            <<"press 1-> Clock in"<<endl
                            <<"press 2-> Change password"<<endl
                            <<"press 3-> Select work day"<<endl
                            <<"press 4-> Show schedule"<<endl
                            <<"press 5-> My co-worker"<<endl
                            <<"press 6-> Leave the page"<<endl;
                        cin>>P;
                        if(P=="1")
                        {
                            staff.check();
                        }
                        else if(P=="2")
                        {
                            p=staff.changePassword();
                            PASSWORD[address]=p;
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
                        else if(P=="3")
                        {
                            staff.choose();
                        }
                        else if(P=="4")
                        {
                            staff.schedule();
                        }
                        else if(P=="5")
                        {
                            ifstream fin;
                            fin.open("WHO.txt",ios::in);
                            char ch;
                            if(!fin)
                            {
                                cout<<"Failed"<<endl;
                            }
                            else
                            {
                                while(fin.get(ch))
                                {
                                    cout<<ch;
                                }
                                cout<<endl;
                            }
                            fin.close();
                        }
                        else if(P=="6")
                        {
                            cout<<"Thank you for using!"<<endl;
                            system("pause");
                            system("cls");
                            break;
                        }
                        else
                        {
                            cout<<"Input error! Please try again!"<<endl;
                        }
                        system("pause");
                        system("cls");
                    }
                }
                else
                {
                    int total=NAME.size();
                    BOSS boss(n,a,p,address,total);
                    SetColor(113);
                    while(P!="8")
                    {
                        cout<<"Choose what to do! "<<endl
                            <<"press 1 -> Create a new boss account"<<endl
                            <<"press 2 -> Create a new staff account"<<endl
                            <<"press 3 -> Change password"<<endl
                            <<"press 4 -> Arrange schedule"<<endl
                            <<"press 5 -> Show schedule"<<endl
                            <<"press 6 -> Show workers"<<endl
                            <<"press 7 -> Fire someone"<<endl
                            <<"press 8 -> Leave the page"<<endl;
                        cin>>P;
                        if(P=="1")
                        {
                            boss.createNewBoss(NAME,ACCOUNT,PASSWORD);
                            read_data();
                        }
                        else if(P=="2")
                        {
                            boss.createNewStaff(NAME,ACCOUNT,PASSWORD);
                            read_data();
                        }
                        else if(P=="3")
                        {
                            p=boss.changePassword();
                            PASSWORD[address]=p;
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
                        else if(P=="4")
                        {
                            boss.requiredWorkers();
                        }
                        else if(P=="5")
                        {
                            boss.schedule();
                        }
                        else if(P=="6")
                        {
                            ifstream fin;
                            fin.open("WHO.txt",ios::in);
                            char ch;
                            if(!fin)
                            {
                                cout<<"Failed"<<endl;
                            }
                            else
                            {
                                while(fin.get(ch))
                                {
                                    cout<<ch;
                                }
                                cout<<endl;
                            }
                            fin.close();
                        }
                        else if(P=="7")
                        {
                            boss.fire(NAME,ACCOUNT,PASSWORD);
                            read_data();
                        }
                        else if(P=="8")
                        {
                            cout<<"Thank you for using!"<<endl;
                            system("pause");
                            system("cls");
                            break;
                        }
                        else
                        {
                            cout<<"Input error! Please try again!"<<endl;
                        }
                        system("pause");
                        system("cls");
                    }
                }
            }
        }
        else
        {
            cout<<"Input error! Please try again!"<<endl;
        }
        SetColor(14);
    }
}
