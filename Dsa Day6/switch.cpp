#include<iostream>
using namespace std;

int main(){
    int num=1 ;
    char ch='a';
    switch(num){
        case 1: cout<<"first"<<endl;
        // break;
        // case '1': cout<<"character 1"<<endl;
        // break;
        case '1': switch(num){
            case 1: cout<<"Value of num is:"<<endl;
            break;
        }
        break;
        
        default: cout<<"It is default case"<<endl;

    }
    return 0; 
}