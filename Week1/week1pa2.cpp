#include<bits/stdc++.h>

using namespace std;
#define ing long long 

void solve(){
    int n ; 
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool flag=true; 

    for( int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){

        }else{
            flag=false; 
        }
    }

    if(flag){
        cout<<"L"<<'\n';
    }else{
        cout<<"R"<<'\n';
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