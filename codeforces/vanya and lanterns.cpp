#include<bits/stdc++.h> 
using namespace std; 

int main(){ 
    long long n,l; 
    cin >> n >> l; 
    vector<long long> arr(n); 
    for (int i = 0; i < n; i++){ 
        cin >> arr[i]; 
    } 

    sort(arr.begin(), arr.end()); 

    long long max_dist = 0; 
    for (int i = 0; i < n - 1; i++){ 
        long long dist = arr[i+1] - arr[i]; 
        if (dist > max_dist) {
            max_dist = dist;
        }
    } 

    // finding max of three vals: radius, start and end of the latern positions
    double ans = max((double)max_dist / 2.0, max((double)arr[0], (double)(l - arr[n-1])));
    
    // precision setting
    cout << fixed << setprecision(10) << ans << endl; 
}
