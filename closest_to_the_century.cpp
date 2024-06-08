#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int run = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= 100 && a[i] >= run)
            {
                run = a[i];
            }
        }
        cout << run << endl;
    }
    return 0;
}