#include <bits/stdc++.h>
using namespace std;

int main()
{
//    string s, s1;
//    cin >> s;
//    s1 = s;
//    reverse(s1.begin(), s1.end());
//    if (s1 == s) cout << "1\n";
//    else cout << "0\n";

    string s;
    cin >> s;
    int greenP, redP;
    greenP = 0;
    redP = s.size() - 1;

    while(greenP <= redP)
    {
        if (s[greenP] == s[redP])
        {
            greenP++;
            redP--;
        }
        else break;
    }
    if (redP < greenP) cout << "1\n";
    else cout << "0\n";

    return 0;
}
