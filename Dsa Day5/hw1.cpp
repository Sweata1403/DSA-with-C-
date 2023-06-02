#include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    if(n<0){
        // if number is negative
        n = n*(-1);
        int ans = decimalToBinary(n);
    // Find 2's compliment of the number
    // 1's comp
    int newAns = (~ans);
    // 2's comp
    newAns = newAns+1;
    cout << newAns << endl;

    } else {
        // if number is positive 
        int ans = decimalToBinary(n);
        cout << ans << endl;
    }

    return 0;
}