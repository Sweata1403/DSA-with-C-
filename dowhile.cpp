#include<iostream>
using namespace std;

int main()
{
    int value=0;
    int i=1;
    cout<<"enter the number:";
    cin>>value;

    do
    {
        cout<<endl<<value<<"*"<<i<<"="<<value*i; 
    }

    while (i<=1);
    return 0;
}