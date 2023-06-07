#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=5;i++)
    {
        if(i==4)
        {
            continue;
        }
        cout<<endl<<i;
    }
    return 0;
}