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
cin>>n>>q;
vector<ll>a(n),b(n),pref(n+1,0);
map<int,int>mp;
for(int i=0;i<n;i++){
        cin>>b[i];
}
reverse(b.begin(),b.end());
for(int i=0;i<n;i++){

        if(mp[b[i]]==1){
            a[i]=0;
        }
        else{
            a[i]=1;
            mp[b[i]]++;
        }
}
pref[0]=0;
for(int i=1;i<=n;i++){
pref[i]=pref[i-1]+a[i-1];
}

while(q--){
int l;

cin>>l;

cout<<pref[n-l+1]<<endl;

}
return 0;
}
