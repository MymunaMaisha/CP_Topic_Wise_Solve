#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
  int n,q;
  cin>>n>>q;
  vector<int>a1(n),preff1(n+1,0),a2(n),preff2(n+1,0),a3(n),preff3(n+1,0);
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x==1){
        a1[i]=1;
    }
    else if(x==2){
        a2[i]=1;
    }
    else{
        a3[i]=1;
    }
  }
  preff1[0]=a1[0];
  preff2[0]=a2[0];
  preff3[0]=a3[0];
  for(int i=1;i<=n;i++){
   preff1[i]=preff1[i-1]+a1[i-1];
   preff2[i]=preff2[i-1]+a2[i-1];
   preff3[i]=preff3[i-1]+a3[i-1];
  }
  while(q--){
    int l,r;
    cin>>l>>r;
    cout<<preff1[r]-preff1[l-1]<<" ";
    cout<<preff2[r]-preff2[l-1]<<" ";
    cout<<preff3[r]-preff3[l-1]<<endl;
  }

return 0;
}
