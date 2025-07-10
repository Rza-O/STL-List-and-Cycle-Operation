#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};
    // list<int> l2;
    // assing - 1 this will be used more
    // l2 = l;

    // assign -2
    // l2.assign(l.begin(), l.end());

    // insert at head
    l.push_front(100);
    // insert at tail
    l.push_back(40);

    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}