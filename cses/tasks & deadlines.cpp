#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    
    vector<pair<long long,long long>> tasks;

    for (int i = 0; i < n; i++){
        long long a,d;
        cin >> a >> d;
        tasks.push_back({a,d});
    }

    sort(tasks.begin(),tasks.end());

    long long time = 0;
    long long reward = 0;

    for (auto &t:tasks){
        time += t.first;
        reward += t.second - time;
    }

    cout << reward << endl;
}