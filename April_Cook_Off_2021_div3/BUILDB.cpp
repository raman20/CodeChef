#include <bits/stdc++.h>
using namespace std;

void run_test_()
{
    long int n, r, x{0}, max_{0}, diff{0};
    cin >> n >> r;
    long int time[n], tension[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> time[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> tension[i];
    }

    x += tension[0];
    max_ = x;
    for (int i = 1; i < n; i++)
    {
        diff = time[i] - time[i - 1];
        x += tension[i] - (r * diff);
        max_ = std::max(max_, x);
    }

    cout << max_ << "\n";
}

int main()
{
    long int test;
    cin >> test;
    while (test--)
    {
        run_test_();
    }
    return 0;
}