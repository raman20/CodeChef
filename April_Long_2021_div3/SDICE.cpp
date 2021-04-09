#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    int dice_count, rem, res;

    while (test--)
    {
        cin >> dice_count;
        res = 0;

        rem = dice_count % 4;
        if (rem == 4)
        {
            res += 15 * 4;
        }
        else if (rem == 3)
        {
            res += 18 * 2 + 15;
        }
        else if (rem == 2)
        {
            res += 18 * 2;
        }
        else if (rem == 1)
        {
            res += 20;
        }

        dice_count -= rem;

        if (dice_count)
        {
            res += 60 - 4 * rem;
            dice_count-= 4;
            res += 44 * dice_count;
        }

        cout << res << endl;
    }

    return 0;
}
