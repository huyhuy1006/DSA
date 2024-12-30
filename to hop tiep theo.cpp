#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& a, int N, int K) {
    int idx = K - 1;
    
    int i = idx;
    while (i >= 0 && a[i] == N - K + i + 1) {
        i--;
    }
    
    if (i < 0) {
        cout << K << endl;
    } else {
        a[i]++;
        for (int j = i + 1; j < K; j++) {
            a[j] = a[j - 1] + 1;
        }
        cout << (K - i) << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> a(K);
        for (int i = 0; i < K; i++) {
            cin >> a[i];
        }
        solve(a, N, K);
    }
    return 0;
}

