#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 1'000'006;
 
int calc_factor(int n, int p) {
    int ans = 0;
    while(n) {
        n = n / p;
        ans += n;
    }
    return ans;
}
 
int fexp(int b, int e) {
    b %= 10;
    int ans = 1;
    while(e) {
        if(e & 1) ans = ans * b % 10;
        b = b * b % 10;
        e /= 2;
    }
    return ans;
}
 
int fact_sem_2_e_5[N];
 
int main() {
 
    fact_sem_2_e_5[0] = 1;
    for(int i = 1; i < N; i++) {
        int cur = i;
        while(cur % 2 == 0) cur /= 2;
        while(cur % 5 == 0) cur /= 5;
        fact_sem_2_e_5[i] = cur * fact_sem_2_e_5[i - 1] % 10;
    }
 
    int n;
    for(int tc = 1; scanf("%d", &n) == 1; tc++) {
 
        int ans = fact_sem_2_e_5[n] * fexp(2, calc_factor(n, 2) - calc_factor(n, 5)) % 10;
 
        printf("Instancia %d\n%d\n\n", tc, ans);
    }
 
}