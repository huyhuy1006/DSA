#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void generateCombinations(vector<string>& names, int n, int k, vector<string>& combination, set<vector<string>>& uniqueCombinations, int index) {
    if (combination.size() == k) {
        uniqueCombinations.insert(combination);
        return;
    }

    for (int i = index; i < n; ++i) {
        combination.push_back(names[i]);
        generateCombinations(names, n, k, combination, uniqueCombinations, i + 1);
        combination.pop_back();
    }
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<string> names(N);
    for (int i = 0; i < N; ++i) {
        cin >> names[i];
    }

    sort(names.begin(), names.end());

    set<vector<string>> uniqueCombinations;
    vector<string> combination;
    generateCombinations(names, N, K, combination, uniqueCombinations, 0);

    for (const auto& comb : uniqueCombinations) {
        for (int i = 0; i < K; ++i) {
            cout << comb[i];
            if (i < K - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}

