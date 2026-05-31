#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,k;
    cin >> n >> m >> k;
    vector<long long> applicant_demand(n);
    vector<long long> available(m);
    for (int i = 0; i < n; i++){
        cin >> applicant_demand[i];
    }
    for (int i = 0; i < m; i++){
        cin >> available[i];
    }

    sort(applicant_demand.begin(),applicant_demand.end());
    sort(available.begin(),available.end());

    int ptr1 = 0, ptr2 = 0, applicants_got = 0;
    while (ptr1 < n && ptr2 < m){
        if (applicant_demand[ptr1] >= available[ptr2] - k && applicant_demand[ptr1] <= available[ptr2] + k){
            applicants_got++;
            ptr1++;
            ptr2++;
        }
        else if (applicant_demand[ptr1] < available[ptr2]){          /*applicant's demand too small*/
            ptr1++;
        } else{           /*appartment size too small*/
            ptr2++;
        }

    }

    cout << applicants_got << endl;
}
