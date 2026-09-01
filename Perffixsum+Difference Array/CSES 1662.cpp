#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    int n;
    cin >> n;

   vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >>arr[i];
    }

    map<ll, ll> psums;
    psums[0] = 1;
    ll cur_sum = 0;
    ll total = 0;
    for (int i = 0; i < n; i++) {
        cur_sum += arr[i];
        int mod = (cur_sum % n + n) % n;
        total += psums[mod];
        psums[mod]++;
    }

    cout << total << endl;

return 0;
}
