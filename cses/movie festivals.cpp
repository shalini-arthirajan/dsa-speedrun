#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<pair<int,int>> movies(n);

    int elapsedTime = 0;
    int moviesCount = 0;
    
    for (int i = 0; i < n; i++){
        int start, end;
        cin >> start >> end;
        movies[i] = {end, start};
    }

    sort(movies.begin(),movies.end()); // sorted based on movie end times

    for (int i = 0; i < n; i++){
        if (movies[i].second >= elapsedTime){
            moviesCount++;
            elapsedTime = movies[i].first;
        }
    }

    cout << moviesCount << endl;
}