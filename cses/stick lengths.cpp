#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0;i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    long long median = arr[n/2];
    long long x = 0;

    for (int i = 0; i < n; i++){
        x += llabs(arr[i]-median);
    }

    cout << x << endl;
}