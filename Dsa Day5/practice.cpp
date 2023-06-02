#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int i = 1;

    while (n != 0) {
        int bit = n % 2;
        ans += bit * i;
        n = n / 2;
        i *= 10;
    }

    cout << "Answer is: " << ans << endl;

}