#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int u_int;
typedef long double ld;

void array_reordering()
{
    int n;
    cin >> n;

    int data[n];

    for (int i = 0; i < n; i++)
        cin >> data[i];

    int good_count = 0;
    int extra_count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (__gcd(data[i], 2 * data[j]) != 1)
                {
                    good_count++;
                    if (__gcd(data[i], data[j]) == 1)
                        extra_count++;
                }
            }
        }
    }
    cout << (good_count + extra_count) / 2 << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
        array_reordering();

    return 0;
}