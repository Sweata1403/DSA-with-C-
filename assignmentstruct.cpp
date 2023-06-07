#include<iostream>
#include<string>
using namespace std;

struct student
{
 string fullname;
 int rollno;
 int marks;
};


int main()
{
    student stu;
    stu.fullname="Sweata Chakraborty";
    stu.rollno= 19;
    stu.marks= 100;

    //print data of user defined datatypes

    cout<<endl<<"fullname:"<<stu.fullname;
    cout<<endl<<"rollno.:"<<stu.rollno;
    cout<<endl<<"marks:"<<stu.marks;
    
    return 0;
}