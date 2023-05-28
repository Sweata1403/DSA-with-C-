#include<iostream>
using namespace std;

int main(){
    int a=2/5;
    cout<<a<<endl;              //output will be 0 because int/int=int
    
    
    int b=2.0/5;
    cout<<b<<endl;              //output will be 0 because data was getting stored in integer

    int c=2.0/5;
    cout<<2.0/5<<endl;
}