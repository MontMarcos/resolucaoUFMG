// https://br.spoj.com/p             roblems/PRIMO/

#include <iostream>
using namespace std; 

int main() { 
    long long x; cin >> x; 
    bool primo = true; 
    for(long long i = 2; i*i <= x; i++) {
        if (x % i == 0)
        {
           primo = false;
        }
    }
    if (primo)
    {
        cout << "sim";
    }else {
        cout << "nao";
    } 
    
}