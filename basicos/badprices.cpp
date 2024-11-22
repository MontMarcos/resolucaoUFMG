#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
#define endl "\n"; 
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() { _ 
int t;
    cin >> t;
    forn(tt, t) {
        int n;
        cin >> n;
        vector<int> a(n);
        forn(i, n)
            cin >> a[i];
        int ans = 0;
        int right_min = INT_MAX;
        for (int i = n -  1; i >= 0; i--) {
            if (a[i] > right_min)
                ans++;
            right_min = min(right_min, a[i]);
        }
        cout << ans << endl;
    }

} 