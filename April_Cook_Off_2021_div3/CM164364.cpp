#include <bits/stdc++.h>
using namespace std;


void fun()
{
    long int n,x;
    cin >> n >> x;
    long int arr[n];
    std::set<long int> temp;
    for(long int i{0}; i < n; ++i)
    {
        cin >> arr[i];
        temp.insert(arr[i]);
    }

    long int distinct = temp.size();

    if(n-distinct >= x)
    {
        cout << distinct << "\n";
    }
    else
    {
        cout << n-x << "\n";
    }

}

int main()
{
    long int test;
    cin >> test;
    while(test--)
    {
        fun();
    }

    return 0;
}