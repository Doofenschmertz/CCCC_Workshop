#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;


void solve(){
    int n;
    
    cin>>n;
    
    int a[n],b[n];
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    for(int i=0;i<n;i++)
        cin>>b[i];
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i])
            swap(a[i],b[i]);
    }
    
    sort(a,a+n);
    sort(b,b+n);
    
    cout<<a[n-1]*b[n-1]<<endl;
    
    return;
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
