#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";

    // cout << s.size();

    // cout << s.max_size();

    // cout << s.capacity();

    // s.clear();

    // if (s.empty() == true)
    // {
    //     cout << "empty";
    // }

    s.resize(15, 'x');

    cout << s;

    return 0;
}