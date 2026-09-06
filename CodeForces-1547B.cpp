#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
 int t;
 cin>>t;
 while(t--){
    string s;
 cin>>s;
 int n= s.length(),pos=-1;
 pos=s.find('a');
 if(pos==-1){
    cout<<"NO"<<endl;
    continue;
 }
 int l=pos,f=1;
 int r=pos;
 for(int i=1;i<n;i++){
    int k=s.find('a'+i);
    if(k == string::npos)
    {
        f = 0;
        break;
    }
    if(k==l-1){
        l=k;
    }
    else if(k==r+1){
        r=k;
    }
    else{
        f=0;
        break;
    }
 }
 if(f){
    cout<<"YES"<<endl;

 }
 else{
    cout<<"NO"<<endl;
 }
 }

return 0;
}
