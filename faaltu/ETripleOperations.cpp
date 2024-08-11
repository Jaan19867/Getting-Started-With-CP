#include<bits/stdc++.h>

using namespace std;

int arr[100100+10];

int func(int i ){
    if(i==0){
        return 0; 
    }

    return  1+func(i/3);
}

 void solve(){
    int l , r; 
    cin>>l>>r;
   int ans=0;

   ans+=2*arr[l];
    for( int i=l+1;i<=r;i++){
        ans+=arr[i];

    }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

   for( int i=0;i<100100;i++){
    arr[i]=func(i);
   }

    int T;
    cin>>T;
    while(T--)
        solve();
}