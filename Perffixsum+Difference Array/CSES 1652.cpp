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
 ll ar[n][n],pref[n+1][n+1]={0};
for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        char x;
        cin >> x;

        ar[i-1][j-1] = (x == '*');

        pref[i][j] = ar[i-1][j-1]+ pref[i-1][j] + pref[i][j-1]- pref[i-1][j-1];
    }
}

while(m--){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << pref[x2][y2]- pref[x1-1][y2]- pref[x2][y1-1]+ pref[x1-1][y1-1]<< endl;
}
return 0;
}
