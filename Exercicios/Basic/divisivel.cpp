#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
#define endl "\n"; 

int check_divisao(int a, int b){
    int minD = 0;

    while (a%b!=0)
    {
        a++;
        minD+=1;
    }
    return minD;
    
}

int main(){1
    int a, b;
    cin>>a;
    cin>>b;

    cout << "---------------------------"<< endl;
    cout << check_divisao(a, b)<< endl;
}