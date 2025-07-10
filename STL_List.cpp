#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l(10,5);
    // Copying one list to another
    // list<int> l = {1, 2, 3, 4, 5};
    // list<int> l2(l);

    // copying array to list
    // int a[] = {10, 20, 30};
    // list<int> l2(a,a + 3);

    // copying vector to list
    vector<int> v = {10, 20, 30, 50};
    list<int> l2(v.begin(), v.end());

    // cout << *l.begin() << endl;

    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for (int val : l2)
    {
        cout << val << endl;
    }

    return 0;
}