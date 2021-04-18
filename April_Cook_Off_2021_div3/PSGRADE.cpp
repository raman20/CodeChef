#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int a_min,b_min,c_min,t_min,a,b,c;
    cin >> a_min >> b_min >> c_min >> t_min >> a >> b >> c;

    if(a>=a_min && b>=b_min && c >=c_min)
    {
        if(a+b+c >= t_min)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        fun();
    }
    return 0;
}