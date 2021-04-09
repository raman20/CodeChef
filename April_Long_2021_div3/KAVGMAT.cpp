// https://www.codechef.com/APRIL21C/problems/KAVGMAT

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    long long int count;
    cin >> test;

    while (test--)
    {
        long long int M, N, K, sum;
        cin >> N >> M >> K;
        long long int arr[N][M];
        long long int dp[N + 1][M + 1] = {{0}};
        count = 0;

        for (long long int i{0}; i < N; ++i)
        {
            for (long long int j{0}; j < M; ++j)
            {
                cin >> arr[i][j];
            }
        }

        for (long long int i = 1; i < N + 1; i++)
        {
            for (long long int j = 1; j < M + 1; j++)
            {
                dp[i][j] = arr[i - 1][j - 1] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
            }
        }

        for (long long int size{1}; size <= N; ++size)
        {
            for (long long int i = size; i < N + 1; i++)
            {
                for (long long int j = size; j < M + 1; j++)
                {
                    sum = 0;
                    if (i - size >= 0 && j - size >= 0)
                    {
                        sum = dp[i][j] - dp[i - size][j] - dp[i][j - size] + dp[i - size][j - size];
                    }

                    if (sum / pow(size, 2) >= K)
                    {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}