#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* topic: is s2 a subsequence of s1 */
    // In this code we apply a technique-> two-pointer/
    // sliding window
    string s1, s2;
    cin >> s1 >> s2;

    int redP, greenP;
    redP = greenP = 0;

    while(redP < s1.size() && s2.size())
    {
        if (s1[redP] == s2[greenP])
        {
            greenP++;
        }
        redP++;
    }

    if (greenP == s2.size()) cout << "1\n";
    else cout << "0\n";

    main();
    return 0;
}
