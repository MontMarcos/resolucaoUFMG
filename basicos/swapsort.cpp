#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
#define endl "\n"; 

void bubbleSort(vector<int>& v) {
    int n = v.size();

    // Outer loop that corresponds to the number of
    // elements to be sorted
    for (int i = 0; i < n - 1; i++) {

        // Last i elements are already
        // in place
        for (int j = 0; j < n - i - 1; j++) {
          
              // Comparing adjacent elements
            if (v[j] > v[j + 1])
              
                  // Swapping if in the wrong order
                swap(v[j], v[j + 1]);
                cout << v[j] << v[j + 1] << endl; 
        }
    }
}

int main() { _

int n; cin >> n; 
vector<int> v(n); 

for(int i = 0; i<v.size(); i++) {
    cin >> v[i]; 
}

    // Sorting the vector v
    bubbleSort(v);


} 