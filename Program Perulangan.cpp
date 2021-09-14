//Program Perulangan

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i,j;
for (i=0;i<=10;i++)
{
    for (j=i;j>0;j--)
    {
        cout<<" ";
    }
    for (j=5;j>1;j--)
    {
        cout<<"A";
    }
    for (j=5;j>1;j--)
    {
        cout<<"B";
    }
    cout<<endl;
}
for (i=10;i>=0;i--)
{
    for (j=i;j>0;j--)
    {
        cout<<" ";
    }
    for (j=5;j>1;j--)
    {
        cout<<"A";
    }
    for (j=5;j>1;j--)
    {
        cout<<"B";
    }
    cout<<endl;
}

getch();
}


