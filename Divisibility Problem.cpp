// https://codeforces.com/problemset/problem/1328/A

#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
typedef long long ll;  

int main() { _
    ll t; cin >> t; 
    ll i; 
    
    while(t--) { _
        ll a,b; cin >> a >> b; 

        if(a%b==0){
            cout << "0"<<endl; 
        }else{
            i = a%b; 
            cout << b - i << endl; 
            }
     }
}