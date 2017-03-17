#include<iostream>
#include<iomanip>
#include<cmath>
#include<graphics.h>

using namespace std;
int placecom(char );
int place(char );

int main()
{   int i,j,l,m;
    int k=49;
    char ch,p1,c1;
    char c='y';
    char a[3][3];
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=k;
            k++;
        }
    }
    cout<<"choose any one either x/o"<<endl;
    cin>>ch;
    if(ch=='x')
    {
        p1='x';
        c1='o';
    }
    else if(ch=='o')
    {
        p1='o';
        c1='x';
    }
    while(c=='y'&& ((a[0][0]!='x'&&a[1][1]!='x'&&a[2][2]!='x')||(a[0][2]!='x'&&a[1][1]!='x'&&a[2][0]!='x')||(a[0][0]!='x'&&a[1][0]!='x'&&a[2][0]!='x')||(a[0][1]!='x'&&a[1][1]!='x'&&a[2][1]!='x')||(a[0][2]!='x'&&a[1][2]!='x'&&a[2][2]!='x')||(a[0][0]!='x'&&a[0][1]!='x'&&a[0][2]!='x')||(a[1][0]!='x'&&a[1][1]!='x'&&a[1][2]!='x')||(a[2][0]!='x'&&a[2][1]!='x'&&a[2][2]!='x')||(a[0][0]!='o'&&a[1][1]!='o'&&a[2][2]!='o')||(a[0][2]!='o'&&a[1][1]!='o'&&a[2][0]!='o')|| (a[0][0]!='o'&&a[1][0]!='o'&&a[2][0]!='o')||(a[0][1]!='o'&&a[1][1]!='o'&&a[2][1]!='o')||(a[0][2]!='o'&&a[1][2]!='o'&&a[2][2]!='o')||(a[0][0]!='o'&&a[0][1]!='o'&&a[0][2]!='o')||(a[1][0]!='o'&&a[1][1]!='o'&&a[1][2]!='o'||(a[2][0]!='o'&&a[2][1]!='o'&&a[2][2]!='o'))))
    {
        cout<<"Do you want to continue the game? y/n "<<endl;
        cin>>c;
         for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<"|"<<a[i][j]<<"|";
            }
            cout<<"\n";
        }
        cout<<"Where do you want to place "<<p1<<" ?"<<endl;
        cin>>l;
        m=rand()%9+1;
          if((a[0][0]=='o'&&a[0][1]=='o'&&a[0][2]=='o')||(a[1][0]=='o'&&a[1][1]=='o'&&a[1][2]=='o')||(a[2][0]=='o'&&a[2][1]=='o'&&a[2][2]=='o'))
    {
        if(p1=='o')
        {
            cout<<"Player won the game"<<endl;
        }
        if(c1=='o')
        {
            cout<<"Computer won the game"<<endl;
        }
        break;
    }
   else if((a[0][0]=='o'&&a[1][0]=='o'&&a[2][0]=='o')||(a[0][1]=='o'&&a[1][1]=='o'&&a[2][1]=='o')||(a[0][2]=='o'&&a[1][2]=='o'&&a[2][2]=='o'))
    {
        if(p1=='o')
        {
            cout<<"Player won the game"<<endl;
        }
        if(c1=='o')
        {
            cout<<"Computer won the game"<<endl;
        }
        break;
    }
    else if((a[0][0]=='o'&&a[1][1]=='o'&&a[2][2]=='o')||(a[0][2]=='o'&&a[1][1]=='o'&&a[2][0]=='o'))
    {
        if(p1=='o')
        {
            cout<<"Player won the game"<<endl;
        }
        if(c1=='o')
        {
            cout<<"Computer won the game"<<endl;
        }
        break;
    }
          else{
            if(p1=='o')
            {
                if(l==1)
                {
                   if(a[0][0]!=49)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[0][0]='o';
                    }
                }
            }
            if(c1=='o')
            {
                if(m==1)
                {
                   if(a[0][0]!=49)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[0][0]='o';
                    }
                }
            }
            if(p1=='o')
            {
                if(l==2)
                {
                   if(a[0][1]!=50)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[0][1]='o';
                    }
                }
            }
            if(c1=='o')
            {
                if(m==2)
                {
                   if(a[0][1]!=50)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[0][1]='o';
                    }
                }
            }
            if(p1=='o')
            {
                if(l==3)
                {
                   if(a[0][2]!=51)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[0][2]='o';
                    }
                }
            }
            if(c1=='o')
            {
                if(m==3)
                {
                   if(a[0][2]!=51)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[0][2]='o';
                    }
                }
            }
            if(p1=='o')
            {
                if(l==4)
                {
                   if(a[1][0]!=52)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[1][0]='o';
                    }
                }
            }
            if(c1=='o')
            {
                if(m==4)
                {
                   if(a[1][0]!=52)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[1][0]='o';
                    }
                }
            }
            if(p1=='o')
            {
                if(l==5)
                {
                   if(a[1][1]!=53)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[1][1]='o';
                    }
                }
            }
            if(c1=='o')
            {
                if(m==5)
                {
                   if(a[1][1]!=53)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[1][1]='o';
                    }
                }
            }
            if(p1=='o')
            {
                if(l==6)
                {
                   if(a[1][2]!=54)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[1][2]='o';
                    }
                }
            }
            if(c1=='o')
            {
                if(m==6)
                {
                   if(a[1][2]!=54)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[1][2]='o';
                    }
                }
            }
            if(p1=='o')
            {
                if(l==7)
                {
                   if(a[2][0]!=55)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[2][0]='o';
                    }
                }
            }
            if(c1=='o')
            {
                if(m==7)
                {
                   if(a[2][0]!=55)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[2][0]='o';
                    }
                }
            }
            if(p1=='o')
            {
                if(l==8)
                {
                   if(a[2][1]!=56)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[2][1]='o';
                    }
                }
            }
            if(c1=='o')
            {
                if(m==8)
                {
                   if(a[2][1]!=56)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[2][1]='o';
                    }
                }
            }
            if(p1=='o')
            {
                if(l==9)
                {
                   if(a[2][2]!=57)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[2][2]='o';
                    }
                }
            }
            if(c1=='o')
            {
                if(m==9)
                {
                   if(a[2][2]!=57)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[2][2]='o';
                    }
                }
            }
          }
           if((a[0][0]=='x'&&a[0][1]=='x'&&a[0][2]=='x')||(a[1][0]=='x'&&a[1][1]=='x'&&a[1][2]=='x')||(a[2][0]=='x'&&a[2][1]=='x'&&a[2][2]=='x'))
    {
        if(p1=='x')
        {
            cout<<"Player won the game"<<endl;
        }
        if(c1=='x')
        {
            cout<<"Computer won the game"<<endl;
        }
        break;
    }
    else if((a[0][0]=='x'&&a[1][0]=='x'&&a[2][0]=='x')||(a[0][1]=='x'&&a[1][1]=='x'&&a[2][1]=='x')||(a[0][2]=='x'&&a[1][2]=='x'&&a[2][2]=='x'))
    {
        if(p1=='x')
        {
            cout<<"Player won the game"<<endl;
        }
        if(c1=='x')
        {
            cout<<"Computer won the game"<<endl;
        }
        break;
    }
    else if((a[0][0]=='x'&&a[1][1]=='x'&&a[2][2]=='x')||(a[0][2]=='x'&&a[1][1]=='x'&&a[2][0]=='x'))
    {
        if(p1=='x')
        {
            cout<<"Player won the game"<<endl;
        }
        if(c1=='x')
        {
            cout<<"Computer won the game"<<endl;
        }
        break;
    }
          else{
            if(p1=='x')
            {
                if(l==1)
                {
                   if(a[0][0]!=49)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[0][0]='x';
                    }
                }
            }
            if(c1=='x')
            {
                if(m==1)
                {
                   if(a[0][0]!=49)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[0][0]='x';
                    }
                }
            }
            if(p1=='x')
            {
                if(l==2)
                {
                   if(a[0][1]!=50)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[0][1]='x';
                    }
                }
            }
            if(c1=='x')
            {
                if(m==2)
                {
                   if(a[0][1]!=50)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[0][1]='x';
                    }
                }
            }
            if(p1=='x')
            {
                if(l==3)
                {
                   if(a[0][2]!=51)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[0][2]='x';
                    }
                }
            }
            if(c1=='x')
            {
                if(m==3)
                {
                   if(a[0][2]!=51)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[0][2]='x';
                    }
                }
            }
            if(p1=='x')
            {
                if(l==4)
                {
                   if(a[1][0]!=52)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[1][0]='x';
                    }
                }
            }
            if(c1=='x')
            {
                if(m==4)
                {
                   if(a[1][0]!=52)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[1][0]='x';
                    }
                }
            }
            if(p1=='x')
            {
                if(l==5)
                {
                   if(a[1][1]!=53)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[1][1]='x';
                    }
                }
            }
            if(c1=='x')
            {
                if(m==5)
                {
                   if(a[1][1]!=53)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[1][1]='x';
                    }
                }
            }
            if(p1=='x')
            {
                if(l==6)
                {
                   if(a[1][2]!=54)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[1][2]='x';
                    }
                }
            }
            if(c1=='x')
            {
                if(m==6)
                {
                   if(a[1][2]!=54)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[1][2]='x';
                    }
                }
            }
            if(p1=='x')
            {
                if(l==7)
                {
                   if(a[2][0]!=55)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[2][0]='x';
                    }
                }
            }
            if(c1=='x')
            {
                if(m==7)
                {
                   if(a[2][0]!=55)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[2][0]='x';
                    }
                }
            }
            if(p1=='x')
            {
                if(l==8)
                {
                   if(a[2][1]!=56)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[2][1]='x';
                    }
                }
            }
            if(c1=='x')
            {
                if(m==8)
                {
                   if(a[2][1]!=56)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[2][1]='x';
                    }
                }
            }
            if(p1=='x')
            {
                if(l==9)
                {
                   if(a[2][2]!=57)
                   {
                       cout<<"a different place has to be chosen to place the mark"<<endl;
                       break;
                   }
                    else
                    {
                        a[2][2]='x';
                    }
                }
            }
            if(c1=='x')
            {
                if(m==9)
                {
                   if(a[2][2]!=57)
                   {
                       cout<<"a different place must computer take"<<endl;
                       break;
                   }
                    else
                    {
                        a[2][2]='x';
                    }
                }
            }
          }

    }
    return 0;
}
