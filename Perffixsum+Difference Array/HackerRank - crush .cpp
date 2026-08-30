#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 ll n,m;
 cin>>n>>m;
 vector<ll>arr(n+1,0),pref(n+1,0),suff(n+2,0);
 arr[0]=pref[0]=0;
 while(m--){
    int a,b,k;
    cin>>a>>b>>k;
    arr[a-1]+=k;
    arr[b]-=k;
 }
 pref[1]=arr[0];
 for(int i=2;i<n;i++){
    pref[i]=pref[i-1]+arr[i-1];
 }
 ll mx=0;
 for(int i=1;i<n;i++){
    mx=max(mx,pref[i]);
 }
 cout<<mx<<endl;
return 0;
}
