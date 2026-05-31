#include <bits/stdc++.h>
using namespace std;

int main(){
    int matrix[5][5] = {
        {1,2,9,10,25},
        {4,3,8,11,24},
        {5,6,7,12,23},
        {16,15,14,13,22},
        {17,18,19,20,21}
    };

    long long t,y,x;
    cin >> t;
    while (t--){
        cin >> y >> x;
        cout << matrix[y][x] << endl;
    }

}