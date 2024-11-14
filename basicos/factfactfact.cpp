#include <bits/stdc++.h>
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node(int n)
    {
        data = n;
        prev = NULL;
    }
};

void Multiply(Node *tail, int i)
{
    Node *temp = tail, *prevNode = tail;
    int carry = 0;
    while (temp != NULL)
    {
        int data = temp->data * i + carry;
        temp->data = data % 10;
        carry = data / 10;
        prevNode = temp;
        temp = temp->prev;
    }
    while (carry != 0)
    {
        prevNode->prev = new Node((int)(carry % 10));
        carry /= 10;
        prevNode = prevNode->prev;
    }
}

int main()
{
    _ int n = 20;
    Node tail(1);
    for (int i = 2; i <= n; i++)
        Multiply(&tail, i);
    cout << &tail << endl;
    return 0;
}