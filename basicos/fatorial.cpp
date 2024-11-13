#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
typedef long long ll;  

int main() { _ 
    int n = 1; 
    int contagem = 1; 
    int aux;  
    
    while(true) {
        stringstream res;
        string resultado;
        cin >> n; 
        aux = 1; 
        
        if(n == 0) { 
            break;
        }
        for(int i = 1; i<=n; i++){
            aux *= i;    
        }
        cout << "Instancia: " << contagem << endl; 
        contagem++;
        res << aux; 
        resultado = res.str(); 

        for(int i = resultado.length()-1; i!=0 ; i--) { 
            cout << resultado[i] << endl; 
            if(resultado[i] < 0) {
                cout << resultado[i] << endl;
                break;
            } else {}
        } 
    } 
}