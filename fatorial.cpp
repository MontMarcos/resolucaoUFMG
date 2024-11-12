//https://neps.academy/br/course/introducao-a-programacao/lesson/fatorial

#include <iostream>
using namespace std; 

int main() {
    int x; cin >> x;
    int res = 1; 
    int i = 1; 
    while(i<=x){
        res *= i; 
        i++; 
    }
    cout << res; 
    return 0; 
}