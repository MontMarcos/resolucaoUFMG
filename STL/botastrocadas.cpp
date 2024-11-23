//https://olimpiada.ic.unicamp.br/pratique/p2/2017/f1/botas/
//você recebe n botas, n entre 2 e 10^4. Sendo cada bota composta por uma tamanho M, m entre 30 e 60, e um pé L, sendo L "E" ou "D"
//diga qual o número maximo de pares formados com essas botas. 
//utilziando a STL (biblioteca padrão do C++)
//a resposta vai ser o min entre a E e D de um tamanho X; 


#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
#define endl "\n"; 
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() { _
    int n; cin >> n; 
    vector<pair<int,int>> botas(61,{0,0});  // esse 0,0 é o valor padrão para cada par onde E é first, e D o second

    while (n--)
    {
        int tam; 
        char pe; 
        cin >> tam >> pe;
        //como o vector tem o tamanho 61, ao colocar botas[tam], sempre vai adicionar à algum dos tamanhos o lado esquerdo ou direito à acada cin. 
        if(pe== 'E'){  
            botas[tam].first++;
        } else{ 
            botas[tam].second++;
            }
    }
    int resposta = 0; 
    for(int i = 0; i<botas.size(); i++) {
        //respostas vai ser igual a resposta mais o minimo (de pares) entre botas[i].
        //first e botas[i].second exemplo: botas[34].first = 4 e botas[34].second = 5 
        //o mínimo entre as duas será 4 (numero de pares possível). 
        resposta = resposta + min(botas[i].first ,botas[i].second);
    }
    cout << resposta << endl; 

} 
