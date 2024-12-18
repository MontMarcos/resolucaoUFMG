#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
#define endl "\n"; 

int check_prime(int n){
    int i = 2;
    while (i<n){
        if (n%2 == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main() {
int P;
cout<< "Digite... ";
cin>> P;
    
    if(check_prime(P)){
        cout << "É primo" << endl; 
    } else{
        cout << "Nao é primo" << endl;
    }


}