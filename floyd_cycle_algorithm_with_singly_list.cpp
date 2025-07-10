#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;

    Node *tortoise = head;
    Node *hare = head;
    bool flag = false;

    while (hare != NULL && hare->next != NULL)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;
        if (tortoise == hare)
        {
            // cycle detected
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "cycle detected" << endl;
    else
        cout << "cycle not detected" << endl;

    return 0;
}