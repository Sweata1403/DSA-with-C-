#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n != 0) {
        int bit = n & 1;
        ans = (bit << i) + ans;

        n = n >> 1;
        i++;
    }

    cout << "Answer is: " << ans << endl;

}