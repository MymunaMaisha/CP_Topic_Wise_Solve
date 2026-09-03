#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
      long long x;
      long long sum = 0;
      long long mx = LLONG_MIN;
      for (int i=0;i<n;i++) {
        cin>>x;
        sum= max(x,sum + x);
        mx= max(mx,sum);
    }
    cout<<mx<<endl;
    return 0;
}
