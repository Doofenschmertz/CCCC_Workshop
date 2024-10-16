#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;


void solve(){
    
    int n,k;
    
    cin>>n>>k;
    
    int a[n],b[n];
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    for(int i=0;i<n;i++)
        cin>>b[i];
    
    sort(a,a+n);
    sort(b,b+n);
    
    int point = n-1;
    
    for(int i=0;i<k;i++)
    {
        a[i] = max(a[i],b[point]);
        point--;
    }
    
    int ans = 0;
    
    for(int i=0;i<n;i++)
        ans+=a[i];
    
    cout<<ans<<endl;
}

int32_t main() {
    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    // int t=1;

    while (t--) {
        solve();
    }
}
