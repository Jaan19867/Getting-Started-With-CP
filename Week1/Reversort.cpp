#include<bits/stdc++.h>

using namespace std;
int k ; 

void solve(int T){

     int n ;
     cin>>n;
     int arr[n];

     for( int i=0;i<n;i++){
        cin>>arr[i];
     }

     // solution will be Case #(k-T+1): y

     int ans=0;

     for( int i=0;i<n-1;i++){
        auto it=min_element(arr+i,arr+n);
        int ind=it-arr;

        int cost= ind-i+1;
        ans+=cost; 
        reverse(arr+i,arr+ind+1);
      

     }
    
    cout<<"Case #"<<k-T+1<<": "<<ans<<'\n';
    




    
    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
   k=T;
    while(T--)
        solve(T);
}



// Notes

// ? 1. Last element ko reverse nahi karna because waha tak pura 
// ? reverse ho chhuka hoga , 
// ? 2. Aur hame reverse karna he na ki swap    

