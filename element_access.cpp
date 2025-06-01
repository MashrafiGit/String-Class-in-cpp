#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    cout << s.front() << endl;
    cout << s[1] << endl;
    cout << s.at(2) << endl;
    cout << s[s.size() - 2] << endl;
    cout << s.back() << endl;
    return 0;
}