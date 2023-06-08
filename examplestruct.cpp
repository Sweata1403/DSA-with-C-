#include<iostream>
#include<string>
using namespace std;

struct phone
{
    string name;
    string processor;
    int RAM;
    int ROM;
    int camera;
    double price;
};
int main()
{
    phone moto;
    moto.name="Realme";
    moto.processor="snapdragon 712";
    moto.RAM= 8;
    moto.ROM= 128;
    moto.camera=108;
    moto.price=20000;

    //print data of user defined datatypes

    cout<<endl<<"name:"<<moto.name;
    cout<<endl<<"processor:"<<moto.processor;
    cout<<endl<<"RAM:"<<moto.RAM;
    cout<<endl<<"ROM:"<<moto.ROM;
    cout<<endl<<"camera:"<<moto.camera;
    cout<<endl<<"price:"<<moto.price;

    return 0;
}