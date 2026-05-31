#include <bits/stdc++.h>
using namespace std;

int main(){
    int start,end,num_movies;
    vector<pair<int,int>> times;
    cin >> num_movies;

    while (num_movies--){
        cin >> start >> end;
        times.push_back({start,1});
        times.push_back({end,-1});
    }

    sort(times.begin(),times.end());

    int curr_movie = 0;
    int max_movie = 0;
    for (const pair<int,int> & t:times){
        curr_movie += t.second;
        max_movie = max(max_movie,curr_movie);
    }

    cout << max_movie << endl;

}