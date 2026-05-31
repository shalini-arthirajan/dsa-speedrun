#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while (t--){
        int n,s,x;
        cin >> n >> s >> x;
        vector<int> arr(n);
        for (int i = 0; i <n; i++){
            cin >> arr[i]
            sum += a[i];
        }

        if (sum < s || (s-sum % x != 0)){
            cout << "NO" << endl;
        } else{
            cout << "YES" << endl;
        }
    }
}