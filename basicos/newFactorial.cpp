// https://br.spoj.com/problems/FATORIAL/
// Entrada
// A entrada é composta de diversas instâncias. A primeira linha de cada instância consiste um inteiro n (1 <= n <= 1000000).
// A entrada termina com final de arquivo.

// Saída
// Para cada instância, você deverá imprimir um identificador Instancia k, onde k é o número da instância atual. Na linha seguinte imprima o primeiro dígito (da direita para esquerda) diferente de zero.
// Após cada instância imprima uma linha em branco.

#include <bits/stdc++.h>
using namespace std;
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int input;
int instancia = 1;
int numPosition;

int main()
{
    _ while (true)
    {
        // cin >>
        //     input;

        scanf("%i", &input);

        if (input == 0)
        {
            break;
        }

        int factorial = 1;
        for (int i = 1; i <= input; ++i)
        {
            // checar pra guardar somente 9 dígitos no fatorial
            if (factorial > 100000000)
                break;

            factorial *= i;
        }

        auto factorialWord = to_string(factorial);

        for (int i = factorialWord.length() - 1; i != 0; i--)
        {
            // se o número for muito grande nem roda essa joça
            if (i > 1000000)
            {
                break;
            }

            if (stoi(&factorialWord[i]) != 0)
            {

                printf("Instancia %i\n", instancia);
                // fazer com printf é muito difícil, então mesmo sendo mais lento vai de cout msm
                cout << factorialWord[i] << endl;
                instancia++;
                break;
            }
            else
                continue;
        }
    }
    return 0;
}