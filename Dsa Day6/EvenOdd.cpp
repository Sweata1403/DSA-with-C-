#include<iostream>
using namespace std;

//1 -> Even
//0 -> odd

bool isEven(int a){
    if(a&1){        //odd
        return 0;  
    }
    else{           //even
        return 1;
    }
}

int main(){
    int num;
    cin>>num;

    if (isEven(num)){
        cout<<"Number is Even"<<endl;
    }
    else{
        cout<<"Number is Odd"<<endl;
    }

    return 0;
}