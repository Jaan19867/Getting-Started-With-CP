#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int j=0;
    bool flag=true; 
    bool is=false; 

    for( int i=0;i<t.length();i++){
        
   

       while(j<s.length()){

        if(s[j]==t[i] ){
            if(i==t.length()-1){
                 is=true; 
            }
            j++;
            break; 
        }else  if(s[j]=='?'){
              if(i==t.length()-1){
                 is=true; 
            }
            s[j]=t[i];
           j++;
            break; 
        }
        j++;
       }
       
     
      
       
    }
    
    
    
    
    if(is){
        cout<<"YES"<<'\n';
        
        for( auto it: s){
            if(it=='?'){
                cout<<'a';
            }else{
                cout<<it;
        }
            
        }
        cout<<'\n';
        

    }else{
        cout<<"NO"<<'\n';
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