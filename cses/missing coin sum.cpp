#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());

    long long val = 1;

    for (auto e : arr){
        if (e > val){
            cout << val << endl; // if the cur coin is > then val can't be formed
            return 0;
        }
        else{
            val += e;
        }
    }

    cout << val << endl;
}