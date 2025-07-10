#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40, 60, 60, 10};

    // remove function
    // l.remove(10);

    // sorting in asc
    l.sort();

    // sorting list in desc
    // l.sort(greater<int>());

    // Keeping the unique value
    // l.unique(); // this only works in sorted list

    // reversing the whole list
    l.reverse();

    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}