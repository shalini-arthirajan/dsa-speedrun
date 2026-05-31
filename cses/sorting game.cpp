#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long n = 0;
        string s;
        cin >> n;
        cin >> s;

            string sorted = s;
    sort(sorted.begin(), sorted.end());

    if (s == sorted) {
        cout << "Bob\n";
        continue;
    }

    vector<int> idx;
    for(int i = 0; i < n; ++i) {
        if(s[i] != sorted[i]) {
            idx.push_back(i + 1);
        }
    }

    cout << "Alice\n";
    cout << idx.size() << '\n';
    for(auto i : idx) cout << i << " ";
    cout << '\n';

    }
}