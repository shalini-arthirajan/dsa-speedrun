#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    vector<long long> arr(n);
    for (int i  = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    if (k == 0) { //no element <= x so
        if (arr[0] == 1){ //  x must be smaller than smallest element and x ranges from 1 to 10^9
            cout << -1;
        }else{
            cout << arr[0]-1;
        }
        return 0;
    }

    long long x = arr[k-1];

    if (k < n && arr[k] == x){ // in the case repeated elements more than n
        cout << -1;
    } else{
        cout << x;
    }
}