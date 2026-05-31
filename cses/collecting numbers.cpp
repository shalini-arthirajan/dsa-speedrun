#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<int> pos(n + 1);
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        pos[x] = i;
    }

    long long trips = 1;
    for (int i = 1; i < n; i++){
        if (pos[i+1] < pos[i]){
            trips++;
        }
    }

    cout << trips << endl;
    return 0;
}