#include <bits/stdc++.h>
#define l long
using namespace std;

int main()
{
    ll int test;
    cin >> test;

    while (test--)
    {
        ll int N, S;
        cin >> N >> S;

        if (!N - 1)
        {
            cout << "0\n";
            continue;
        }

        ll int paths[N - 1][2];

        for (int i{0}; i < N - 1; ++i)
        {
            cin >> paths[i][0] >> paths[i][1];
        }
    }

    return 0;
}