#include<iostream>
using namespace std;

int main()
{
    //create array
                    //datatypename_of_array[size]={};
    int arr[5]={0};
    for (int i=0;i<=5;i++)
    {
        cout<<endl<<"enter no."<<i<<":";
        cin>>arr[i];
    }
    //minimum
    int min=arr[0];
    for (int i=1; i<5; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<endl<<"min values is:"<<min;

    return 0;
}