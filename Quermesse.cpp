// https://br.spoj.com/problems/QUERM/

#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 

int main() { _

    int numeroteste;
    int contagem = 1; 
   

    while (true) { // enquanto for != de zero
        cin >> numeroteste;
        vector<int> entradas(numeroteste, 0); 
        if (numeroteste == 0) break;

            for(int i = 0; i < entradas.size(); i++ ){ // recebe o valor das entradas 
                cin >> entradas[i]; 
            }

            for (int j = 0; j < entradas.size(); j++) { // verifica se o número do bilhete (entradas) for igual a fila (J)  
                if (entradas[j] == j+1) {
                    cout << "Teste " << contagem << endl;
                    cout << entradas[j] << endl;
                    contagem++;
                } 
            }


    } 

}



// 4
// 4 5 3 1
// 10
// 9 8 7 6 1 4 3 2 12 10
// 0