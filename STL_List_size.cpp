#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};
    // l.clear();

    // cout << l.size() << endl;
    // if (l.empty())
    // {
    //     cout << "Empty" << endl;
    // }

    l.resize(5);

    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}