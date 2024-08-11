#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n;
    cin>>n;
    int arr[n];
    vector<int> vt;

    for( int i=0;i<n;i++){
        cin>>arr[i];
        vt.push_back(arr[i]);


    }

    sort(vt.begin(),vt.end());

    set<int> st;
    int ans=0;

    for( int i=0;i<n;i++){
        st.insert(arr[i]);
        if(st==)
    }

    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}