#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks:"; 
    cin>>marks;
    
    if(marks>=60 && marks<=100)
    {
        cout<<"You are pass";
    }
    else if (marks>=0 && marks<60)
    {
        cout<<"you are fail";
    }
    else
    {
        cout<<"invalid input";
    }
    return 0;
}