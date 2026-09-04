#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
 ll n,q;
 cin>>n;
 vector<ll>a(n),pref(n+1,0);
 ll add=0,sub=0;
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 sort(a.begin(),a.end());
 for(int i=0;i<n;i++){
   add+=a[i]*i;
   sub+=a[i]*(n-1-i);
 }
cout<<add-sub<<endl;
return 0;
}
