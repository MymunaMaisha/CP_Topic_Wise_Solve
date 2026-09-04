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

 for(int i=0;i<n;i++){
    cin>>a[i];
 }
pref[0]=0;
 for(int i=1;i<=n;i++){
    pref[i]=pref[i-1]+a[i-1];
 }

cin>>q;

while(q--){
    int l,r;

    cin>>l>>r;

    cout<<pref[r+1]-pref[l]<<endl;

 }
return 0;
}
