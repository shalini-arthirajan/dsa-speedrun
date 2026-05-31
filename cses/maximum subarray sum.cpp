#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long best = arr[0];
    long long sum = arr[0];
    for (int j = 1; j < n; j++){
        sum = max(arr[j],sum + arr[j]);
        best = max(sum,best);
    }
    cout << best << endl;
}