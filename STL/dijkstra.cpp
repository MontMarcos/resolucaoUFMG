// https://judge.beecrowd.com/en/problems/view/2653

#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
#define endl "\n"; 
int main() { _ 
    //essa string serve apenas para inserirmos no set, pois na dá pra usar insert(cin)
    string compa; 
    
    //o set ele ignora repetição. 
    set<string> str;  
    
    //vai até eu não colocar nada 
    while(cin >> compa){ 

    // adiciona no set<string> srt
        str.insert(compa); 

    } 
    cout << str.size() << endl; 

} 
        