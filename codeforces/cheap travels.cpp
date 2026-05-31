#include <bits/stdc++.h>
using namespace std;

int main(){
    long n,m,a,b;
    cin >> n >> m >> a >> b;
    long costa,costb,costc,ans,full,rem = 0;

    costa = n*a;
    full = n / m;
    rem = n % m;
    costb = full*b + rem*a;
    costc = ((n+m-1)/m)*b; // rounded up special tickets

    ans = min({costa,costb,costc});
    cout << ans;
}