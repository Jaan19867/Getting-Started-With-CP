#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a1 , a2, b1, b2; 
    cin>>a1>>a2>>b1>>b2;


    int ans=0;
    int score=0;
    int scoreb=0;

    if(a1>b1){
        score++;

    }else if(a1<b1){
        scoreb++;
    }

    if(a2>b2){
        score++;
    }else if(a2<b2){
        scoreb++;
    }

    if(score>scoreb){
        ans+=2;
    }


    score=0;
    scoreb=0;

     if(a2>b1){
        score++;

    }else if(a2<b1){
        scoreb++;
    }

    if(a1>b2){
        score++;
    }else if(a1<b2){
        scoreb++;
    }

    if(score>scoreb){
        ans+=2;
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