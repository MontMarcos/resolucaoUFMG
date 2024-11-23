#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
#define endl "\n"; 
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() { _
    //n° de testes
    int t;  
    cin >> t;

    //for para n° de testes
    forn(tt, t) {
        int n;
        cin >> n;
        
        //vector do tamanho do n° de dias
        vector<int> a(n);
        
        //for que itera os dias
        forn(i, n)
            cin >> a[i];
        
        int res = 0;
        
        //INT_MAX é uma forma de demonstrar que o valor máximo da variável minímo é o valor máximo de um int (2^32)
        int minimo = INT_MAX;

        //for que percorre o vector de trás para frente
        for (int i = n - 1; i >= 0; i--) {

            //verifica se a[i] é maior que o minimo (a primeira vez sempre será falso)
            if (a[i] > minimo)
                res++;
            //verifica se o minimo é realmente o minimo, no caso da primeira vez, ele sempre assumirá esse como o mínimo, aí começará a checar. 
            minimo = min(minimo, a[i]);
        }
        cout << res << endl;
    }

} 