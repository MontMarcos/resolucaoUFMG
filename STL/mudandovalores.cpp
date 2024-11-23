//você recebeu um vetor v com n valores distintos e precisa mudar esses valores de maneira
//que x recebe posicação de x caso V fosse ordenado
//exemplo: v = { 8,26,15,23,65,19,2} 
//v ordenado = {2, 8, 15, 19, 23, 26, 65}
//v respota = { 1, 5, 2, 4, 6, 3, 0} 


#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
#define endl "\n"; 
int main() { _ 
    int n; cin >> n;
    vector<int> v(n), ordv(n);

    //itera o vetor v e o ordv
    for (int i=0; i<n; i++) {
        cin >> v[i]; 
        ordv[i] = v[i]; 
    }       

    //ordena o vetor ordv
    sort(ordv.begin(), ordv.end()); 

    //um map chamado novoindx, que é acessado por chaves e seus elementos são do tipo int
    map<int,int> novoindx; 

    //
    for(int i=0; i<n; i++){
        novoindx[ordv[i]] = i; 
    }

    for(int i = 0; i<n; i++) {
        v[i] = novoindx[v[i]]; 
    }

    for(int i=0; i<n; i++) {
        cout << v[i] << "";
        cout << endl;  
    }
    
} 