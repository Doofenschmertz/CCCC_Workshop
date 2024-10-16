#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;


void solve(){
    
    string s;
    cin>>s;
    
    string tofind = "hello";
    int counter = 0;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==tofind[counter])
        {
            counter++;
        }
    }
    
    if(counter==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    
}

int32_t main() {
    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    
    int t=1;

    while (t--) {
        solve();
    }
}
