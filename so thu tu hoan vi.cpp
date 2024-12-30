#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>& a) {
    int cnt = 0;
    vector<int> b = a;
    sort(b.begin(), b.end());
    do {
        if (b == a) {
            break;
        }
        cnt++;
    } while (next_permutation(b.begin(), b.end()));
    return cnt + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int cnt = solve(n, a);
        cout << cnt << endl;
    }
    return 0;
}

