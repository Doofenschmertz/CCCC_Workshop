#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;


void solve(){
    
    int arr[] = {1,2,5,10,20,50,100,200};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    reverse(arr,arr+n);
    
    int x;
    cin>>x;
    
    int ans = 0;
    
    vector<int> coins_used;
    
    for(int i=0;i<n;i++)
    {
        while(arr[i]<=x)
        {
            ans++;
            x-=arr[i];
            coins_used.push_back(arr[i]);
        }
    }
    
    if(x==0)
    {
        cout<<ans<<endl;
        for(int i=0;i<ans;i++)
            cout<<coins_used[i]<<" ";
        cout<<endl;
    }
    else
        cout<<"not possible"<<endl;
    

        
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
