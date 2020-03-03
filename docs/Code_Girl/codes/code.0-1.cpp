#include <iostream>
using namespace std;
long long C[100005] = { 0 };
const long long MOD = 1000000007;

int main(void) {
    C[2] = C[1] = 1;
    int n = 0;
    cin >> n;
    if(n < 3) cout << C[n] << endl;
    else {
        for(int i = 3; i <= n; i++) {
            C[i] = 0;
            for(int j = 1; j < i; j++) {
                C[i] += (C[j] * C[i-j]) % MOD;
            }
        }
        cout << (C[n] % MOD) << endl;
    }
    return 0;
}