#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 20, 40, 50, 60, 70};
    list<int> l2;

    // assing - 1 this will be used more
    // l2 = l;

    // assign -2
    l2.assign(l.begin(), l.end());

    // insert at head
    l.push_front(100);

    // insert at tail
    l.push_back(40);

    // delete at tail
    l.pop_back();

    // delete at head
    l.pop_front();

    // insert at any position
    cout << *next(l.begin(), 2) << endl;

    // single value
    l.insert(next(l.begin(), 2), 100);

    // Multiple value
    // list<int> l2 = {100, 200};
    l.insert(next(l.begin(), 2), l2.begin(), l2.end());

    // we can also insert vector into list
    vector<int> v = {2, 3, 4};
    l.insert(next(l.begin(), 2), v.begin(), v.end());

    // earasing single value
    l.erase(next(l.begin(), 3));

    // earasing multiple value
    // l.erase(next(l.begin(), 2), next(l.begin(), 5));

    // replace value
    replace(l.begin(), l.end(), 20, 100);

    // find
    auto it = find(l.begin(), l.end(), 20);
    if (it == l.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }

    // for (int val : l)
    // {
    //     cout << val << endl;
    // }
    return 0;
}