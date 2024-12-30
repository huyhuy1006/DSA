#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    stack<vector<int>>x;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
		   }
		  	x.push(a);
		}
        while (!x.empty()) {
        vector<int> v = x.top();
        x.pop();

        cout << "Buoc " << x.size() + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << v[k] << " ";
        }
        cout << endl;
    }
}
int main(){
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

