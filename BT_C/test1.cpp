#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
		vector<bool> check(10,false);
        ll n;
        cin>>n;
        ll a[n];
//        bool check[10];
//        for(ll i=0;i<=9;i++)check[i]=false;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            while(a[i]>0){
                check[a[i]%10]=true	;
                a[i]/=10;
            }
        } 
        for(ll i=0;i<=9;i++){
            if(check[i]==true) cout<<i<<" ";
        } cout<<endl;
    }
    return 0;
}
