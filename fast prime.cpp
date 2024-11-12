// Dado um número inteiro 1 <= N <= 200de casos testes, recebe, em cada caso um inteiro 1 < x < 2^31, "Prime" se X é um numero primo e "Not Prime" caso contrário. 

#include <iostream>
#include <cmath> 
using namespace std; 

int main() { 

    int n; cin >> n; 

    for(int i = 0; i < n; i++){//até n = 0

        long long x;
        cin >> x; 
        bool primo = true; 

        for (long long j = 2; j*j <= x; j++){ //começando do 2, por que um lógicamente divide o número, e para não usar um número double, utilizamos o J*J <= x, ao invés de j <= sqrt(x), que é a mesma coisa.        
           if(x % j == 0){ 
                primo = false; 
           }
        }
        if(primo){ 
            cout << "PRIME" << endl;
           }else {
            cout << "NOT PRIME" << endl; 
           }  
    } 
}
