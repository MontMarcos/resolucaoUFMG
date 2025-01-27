#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
#define endl "\n"; 

// fatorial é = (n+1)!/(n+1)

int calF(int n) {
   if(n == 0 || n ==1){
     return 1;
   } else {
     return n * calF(n-1); 
   }
 }

int main() {
  int N;
  cout << "Escreva um fator n: ";
  cin >> N; 
  cout << fat(N) << endl;
}
