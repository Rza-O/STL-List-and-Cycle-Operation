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

void print_linkedList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

// LinkedList insertion at tail Optimized complexity O(1)
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    // corner case if linkedlist is empty
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;

    tail = newNode;
}

void reverse_singly_linked_list(Node *&head, Node *&tail, Node *tmp)
{
    // base case
    if (tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    reverse_singly_linked_list(head, tail, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (1) // O(N)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertAtTail(head, tail, val); // O(1)
    }
    reverse_singly_linked_list(head, tail, head);
    // print_linkedList(head);
    cout << head->val << endl;
    cout << tail->val << endl;
    return 0;
}