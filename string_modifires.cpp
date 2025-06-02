#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    string s2 = "Gello";
    // s += "A";

    // s.append(s2);

    // s.push_back('A');

    // s.pop_back();

    // s[5] = 'A'; not allow to resize memory

    // s = s2;

    // s.assign(s2);

    // s.erase(5);

    // s.erase(5, 1);

    // s.replace(6, 0, "Bangladesh ");

    // s.replace(6, 5, "Bangladesh");

    s.insert(6, "Bangladesh ");

    cout << s;
    return 0;
}