// https://www.codechef.com/APRIL21C/problems/SSCRIPT

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int K, N;
    int T,count{0}, i;
    string str;
    cin >> T;

    while (T--)
    {
        cin >> N >> K;
        cin >> str;
        count = 0;
        res = 0;
        
        for (i=0; i < N; i++)
        {   
            if(str[i] != '*')
            {
                count = 0;
            }

            if(str[i] == '*')
            {
                count++;
            }

            if(count == K)
            {
                
            }
        }

        if(i == N)
        {
            cout << "NO";
        }
    }

    return 0;
}