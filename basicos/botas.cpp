//você recebe n botas, n entre 2 e 10^4. Sendo cada bota composta por uma tamanho M, m entre 30 e 60, e um pé L, sendo L "E" ou "D"
//diga qual o número maximo de pares formados com essas botas. 
//utilziando a STL (biblioteca padrão do C++)
//a resposta vai ser o min entre a E e D de um tamanho X; 

#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
#define endl "\n"; 
int main() { _
        
    int n; cin >> n; 
    vector<pair<int,int>> botas(61,{0,0});  //{E,D}

    while(n--){ 
        int tam;  
        char pe; 
        cin >> tam >> pe;  
            if(pe == 'E') {
                botas[tam].first++; 
            }else {
                botas[tam].second++; 
            }
    }
    int resposta = 0; 
    
    for(int i=0; i<botas.size();i++ ) { //para todas botas (botas.size()) ou seja, vai realizar o que eu mandar para todas 
        resposta += min(botas[i].first, botas[i].second);
    } 
    cout << resposta; 
}