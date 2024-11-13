#include <bits/stdc++.h>
using namespace std;
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
typedef long long ll;

ll factorial(int n)
{
    // Base case - If n is 0 or 1, return 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // Recursive case - Return n multiplied by
    // factorial of (n-1)

    return n * factorial(n - 1);
}

int main()
{
    _ 
    int num = 1;
    int contagem = 1;
    int aux;

    while (true)
    {
        stringstream res;
        string resultado;
        cin >> num;
        aux = 1;

        if (num == 0)
        {
            break;
        }
        // for(int i = 1; i<=n; i++){
        //     aux *= i;
        // }

        aux = factorial(num);
        cout << "Instancia: " << contagem << endl;
        contagem++;
        res << aux;
        resultado = res.str();

        for (int i = resultado.length() - 1; i != 0; i--)
        {
            if (resultado[i] != '0')
            {
                cout << resultado[i] << endl;
                break;
            }
            else
            {
            }
        }
    }
}