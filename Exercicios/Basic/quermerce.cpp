#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main(){
    rep(i,0,5){
        cout << i <<endl;
    }
}

struct Point {
    double x;
    double y;
    Point(double theX, double theY) {
    x = theX;   
    y = theY;
}

Point mirror() {
    return Point(x, -y);
}
};