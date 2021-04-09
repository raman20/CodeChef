#include <bits/stdc++.h>
using namespace std;

string SocksPair(int arr[])
{
    if(arr[0] == arr[1] || arr[0] == arr[2] || arr[1] == arr[2])
    {
        return "YES";
    }

    return "NO";
}

int main()
{
    int arr[3];

    for(int i{0}; i < 3; ++i)
    {
        cin >> arr[i];
        if(!(arr[i] >= 1 && arr[i] <= 10))
        {
            cout << "NO";
            return 0;
        }
    }

    cout << SocksPair(arr);

    return 0;
}