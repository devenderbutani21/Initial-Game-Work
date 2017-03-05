#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<graphics.h>

using namespace std;
int roll();
int snakes_ladders(int,int);
int snakes_ladders1(int,int);

int main()
{   int p1=0;
    int p0=0;
    int p11=0;
    int p01=0;
    int i;
    char c;
    initwindow(700,700,"Snakes and Ladder Board");
    readimagefile("Snakes&Ladders.jpg",0,0,700,700);
   do{ if(p0==0)
    {       i= roll();
            if (i==1)
            {
                p1=p0+i;
                p0=snakes_ladders(p1,i);
                cout<<"You are at "<<p1<<endl;
            }
            else
            {
                p1=p0;
                cout<<"You are at start"<<endl;
            }
    }
    else if(p0==100)
    {
            break;
    }
    else
    {
            i= roll();
            p1=p0+i;
            p0=snakes_ladders(p1,i);
            cout<<"You are at "<<p0<<endl;
    }


    if(p01==0)
    {       i= roll();
            if (i==1)
            {
                p11=p01+i;
                p01=snakes_ladders1(p11,i);
                cout<<"Computer is at "<<p11<<endl;
            }
            else
            {
                p11=p01;
                cout<<"Computer is at start"<<endl;
            }
    }
    else if(p01==100)
    {
            break;
    }
    else
    {
            i= roll();
            p11=p01+i;
            p01=snakes_ladders1(p11,i);
            cout<<"Computer is at "<<p01<<endl;

    }
        cout<<"do you want to roll?y/n"<<endl;
        cin>>c;
   }while(c=='y' && p1!=100 &&p11!=100);
     cout<<"Your game ended"<<endl;
      if(p1==100)
     {
         cout<<"You won the game"<<endl;
     }
     else if(p11==100)
     {
         cout<<"Computer won the game"<<endl;
     }

    return 0;
}

int roll()
{
    int i;
    i=rand()%6+1;

      if(i==2)
        {
        cout << " -----" << endl;
        cout << "|    O|" << endl;
        cout << "|     |" << endl;
        cout << "|O    |" << endl;
        cout <<  " -----" << endl;
             return 2;
        }
      else if(i==3)
        {
        cout << " -----" << endl;
        cout << "|    O|" << endl;
        cout << "|  O  |" << endl;
        cout << "|O    |" << endl;
        cout <<  " -----" << endl;
             return 3;
        }
      else if(i==4)
        {
        cout << " -----" << endl;
        cout << "|O   O|" << endl;
        cout << "|     |" << endl;
        cout << "|O   O|" << endl;
        cout <<  " -----" << endl;
             return 4;
        }
       else if(i==5)
        {
        cout << " -----" << endl;
        cout << "|O   O|" << endl;
        cout << "|  O  |" << endl;
        cout << "|O   O|" << endl;
        cout <<  " -----" << endl;
            return 5;
        }
       else if(i==6)
        {
        cout << " -----" << endl;
        cout << "|O   O|" << endl;
        cout << "|O   O|" << endl;
        cout << "|O   O|" << endl;
        cout <<  " -----" << endl;
            return 6;
        }
        else
        {
        cout << " -----" << endl;
        cout << "|     |" << endl;
        cout << "|  O  |" << endl;
        cout << "|     |" << endl;
        cout <<  " -----" << endl;
             return 1;
        }
}
int snakes_ladders(int p1,int i)
{   int p0,p2;
    if(p1==2)
    {   p2=p1;
        p1=38;
        p0=p1;
        cout<<"You climbed a ladder at "<<p2<<endl;
    }
    else if(p1==7)
    {   p2=p1;
        p1=14;
        p0=p1;
        cout<<"You climbed a ladder at "<<p2<<endl;
    }
    else if(p1==8)
    {   p2=p1;
        p1=31;
        p0=p1;
        cout<<"You climbed a ladder at "<<p2<<endl;
    }
    else if(p1==15)
    {   p2=p1;
        p1=26;
        p0=p1;
        cout<<"You climbed a ladder at "<<p2<<endl;
    }
    else if(p1==21)
    {   p2=p1;
        p1=42;
        p0=p1;
        cout<<"You climbed a ladder at "<<p2<<endl;
    }
     else if(p1==28)
    {   p2=p1;
        p1=84;
        p0=p1;
        cout<<"You climbed a ladder at "<<p2<<endl;
    }
    else if(p1==36)
    {   p2=p1;
        p1=44;
        p0=p1;
        cout<<"You climbed a ladder at "<<p2<<endl;
    }
    else if(p1==51)
    {   p2=p1;
        p1=67;
        p0=p1;
        cout<<"You climbed a ladder at "<<p2<<endl;
    }
    else if(p1==71)
    {   p2=p1;
        p1=91;
        p0=p1;
       cout<<"You climbed a ladder at "<<p2<<endl;
    }
    else if(p1==78)
    {   p2=p1;
        p1=98;
        p0=p1;
        cout<<"You climbed a ladder at "<<p2<<endl;
    }
    else if(p1==87)
    {   p2=p1;
        p1=94;
        p0=p1;
        cout<<"You climbed a ladder at "<<p2<<endl;
    }
    else if(p1==16)
    {   p2=p1;
        p1=6;
        p0=p1;
         cout<<"You were bitten by a snake at "<<p2<<endl;
    }
    else if(p1==46)
    {   p2=p1;
        p1=25;
        p0=p1;
         cout<<"You were bitten by a snake at "<<p2<<endl;
    }
    else if(p1==49)
    {   p2=p1;
        p1=11;
        p0=p1;
         cout<<"You were bitten by a snake at "<<p2<<endl;
    }
    else if(p1==62)
    {   p2=p1;
        p1=19;
        p0=p1;
         cout<<"You were bitten by a snake at "<<p2<<endl;
    }
     else if(p1==64)
    {   p2=p1;
        p1=60;
        p0=p1;
         cout<<"You were bitten by a snake at "<<p2<<endl;
    }
    else if(p1==74)
    {   p2=p1;
        p1=53;
        p0=p1;
         cout<<"You were bitten by a snake at "<<p2<<endl;
    }
    else if(p1==89)
    {   p2=p1;
        p1=68;
        p0=p1;
         cout<<"You were bitten by a snake at "<<p2<<endl;
    }
    else if(p1==92)
    {   p2=p1;
        p1=88;
        p0=p1;
         cout<<"You were bitten by a snake at "<<p2<<endl;
    }
    else if(p1==95)
    {   p2=p1;
        p1=75;
        p0=p1;
        cout<<"You were bitten by a snake at "<<p2<<endl;
    }
    else if(p1==99)
    {   p2=p1;
        p1=80;
        p0=p1;
        cout<<"You were bitten by a snake at "<<p2<<endl;
    }
    else if(p1>100)
    {
        p0=p1-i;
        cout<<"You can't any further than 100 "<<endl;
    }
    else
        {
            p0=p1;
        }
    return p0;
}

int snakes_ladders1(int p1,int i)
{   int p0,p2;
    if(p1==2)
    {   p2=p1;
        p1=38;
        p0=p1;
        cout<<"Computer climbed a ladder at "<<p2<<endl;
    }
    else if(p1==7)
    {   p2=p1;
        p1=14;
        p0=p1;
        cout<<"Computer climbed a ladder at "<<p2<<endl;
    }
    else if(p1==8)
    {   p2=p1;
        p1=31;
        p0=p1;
        cout<<"Computer climbed a ladder at "<<p2<<endl;
    }
    else if(p1==15)
    {   p2=p1;
        p1=26;
        p0=p1;
        cout<<"Computer climbed a ladder at "<<p2<<endl;
    }
    else if(p1==21)
    {   p2=p1;
        p1=42;
        p0=p1;
        cout<<"Computer climbed a ladder at "<<p2<<endl;
    }
     else if(p1==28)
    {   p2=p1;
        p1=84;
        p0=p1;
        cout<<"Computer climbed a ladder at "<<p2<<endl;
    }
    else if(p1==36)
    {   p2=p1;
        p1=44;
        p0=p1;
        cout<<"Computer climbed a ladder at "<<p2<<endl;
    }
    else if(p1==51)
    {   p2=p1;
        p1=67;
        p0=p1;
        cout<<"Computer climbed a ladder at "<<p2<<endl;
    }
    else if(p1==71)
    {   p2=p1;
        p1=91;
        p0=p1;
        cout<<"Computer climbed a ladder at "<<p2<<endl;
    }
    else if(p1==78)
    {   p2=p1;
        p1=98;
        p0=p1;
        cout<<"Computer climbed a ladder at "<<p2<<endl;
    }
    else if(p1==87)
    {   p2=p1;
        p1=94;
        p0=p1;
        cout<<"Computer climbed a ladder at "<<p2<<endl;
    }
    else if(p1==16)
    {   p2=p1;
        p1=6;
        p0=p1;
        cout<<"Computer was bitten by a snake at "<<p2<<endl;
    }
    else if(p1==46)
    {   p2=p1;
        p1=25;
        p0=p1;
        cout<<"Computer was bitten by a snake at "<<p2<<endl;
    }
    else if(p1==49)
    {   p2=p1;
        p1=11;
        p0=p1;
        cout<<"Computer was bitten by a snake at "<<p2<<endl;
    }
    else if(p1==62)
    {   p2=p1;
        p1=19;
        p0=p1;
        cout<<"Computer was bitten by a snake at "<<p2<<endl;
    }
     else if(p1==64)
    {   p2=p1;
        p1=60;
        p0=p1;
        cout<<"Computer was bitten by a snake at "<<p2<<endl;
    }
    else if(p1==74)
    {   p2=p1;
        p1=53;
        p0=p1;
        cout<<"Computer was bitten by a snake at "<<p2<<endl;
    }
    else if(p1==89)
    {   p2=p1;
        p1=68;
        p0=p1;
        cout<<"Computer was bitten by a snake at "<<p2<<endl;
    }
    else if(p1==92)
    {   p2=p1;
        p1=88;
        p0=p1;
        cout<<"Computer was bitten by a snake at "<<p2<<endl;
    }
    else if(p1==95)
    {   p2=p1;
        p1=75;
        p0=p1;
        cout<<"Computer was bitten by a snake at "<<p2<<endl;
    }
    else if(p1==99)
    {   p2=p1;
        p1=80;
        p0=p1;
        cout<<"Computer was bitten by a snake at "<<p2<<endl;
    }
    else if(p1>100)
    {
        p0=p1-i;
        cout<<"Computer can't any further than 100 "<<endl;
    }
    else
        {
            p0=p1;
        }
    return p0;
}
