#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    string world;

    // ss >> world;
    // cout << world << endl;

    // ss >> world;
    // cout << world;

    int cnt = 0;
    while (ss >> world)
    {
        cout << world << endl;
        cnt++;
    }

    cout << cnt;

    return 0;
}