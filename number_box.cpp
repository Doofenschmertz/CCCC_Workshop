#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;


void solve(){
    int n,m;
    
    cin>>m>>n;
    
    int arr[n*m];
    int x = 0;
    int c=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int t;
            cin>>t;
            
            arr[c]=t;
            c++;
            
            if(t<0)
                x++;
        }
    }
    
    sort(arr,arr+n*m);
    
    int sum =0;
    
    if(x%2==0)
    {
        for(int i=0;i<n*m;i++)
        {
            sum+=abs(arr[i]);
        }
        cout<<sum<<endl;
    }
    else
    {
        int minval = LONG_LONG_MAX;
        for(int i=0;i<n*m;i++)
        {
            sum+=abs(arr[i]);
            minval = min(minval,abs(arr[i]));
        }
        
        cout<<sum-2*minval<<endl;
        
        
        
    }
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
