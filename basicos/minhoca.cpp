// https://br.spoj.com/problems/MINHOCA/


#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
#define endl "\n"; 
int main() { _ 
    int n; 
    int m; 
    int maior = 0;
    int soma;
    cin >> n >> m; 

    int arr[n][m];

    // itera sobre cada linha da array bidimensional
     for (int i = 0; i < n; i++)                 
         {
             for (int j = 0; j < m; j++)
             {
                 cin >> arr[i][j]; 
             }   
         }

    // soma da linhas do array
    for (int i = 0; i < n; i++) {  
        soma = 0; 
             for (int j = 0; j < m; j++)
             {
                 soma += arr[i][j]; 
             }   
             if (soma > maior) {
                maior = soma; 
             }
        }
        
    //soma das  colunas do array (inverso do anterior)
    for(int i = 0; i<m; i++) { 
        soma = 0; 
        for(int j=0;j<n;j++){
            soma += arr[j][i];
        }
        if(soma> maior) {
            maior = soma; 
        }
    }
    cout << maior << endl;
 
} 