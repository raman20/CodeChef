#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    float k1, k2, k3;
    double v, res;

    if (!(test_case >= 1))
    {
        while (test_case--)
        {
            cin >> k1 >> k2 >> k3 >> v;

            if (0 < k1 && k1 < 2 && 0 < k2 && k2 < 2 && 0 < k3 && k3 <= 1 && 9 < v && v < 11)
            {
                res = k1 * k2 * k3 * v;
                res = 100 / res;

                res *= 100;
                res = ceil(res);
                res /= 100;

                if (res < 9.58)
                {
                    cout << "YES\n";
                    continue;
                }
            }

            cout << "NO\n";
        }
    }

    return 0;
}