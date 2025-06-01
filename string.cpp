#include <bits/stdc++.h>
using namespace std;

int main()
{
    // char x[10] = "Hello";
    // char y[10] = "Gello";

    //   re-set data
    // strcpy(x, y);

    // compare
    // if (strcmp(x, y) == 0)
    // {
    //     cout << "Same";
    // }

    // and it doesn't allow to increase size

    string x = "Hello";
    string y = "Gello";

    //  re-set data
    x = "Gello";

    //  compare
    if (x == y)
    {
        cout << "Same";
    }
    else
        cout << "Not Same";

    return 0;
}