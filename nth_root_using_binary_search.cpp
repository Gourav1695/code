#include <bits/stdc++.h>
using namespace std;
double multiply(double mid, int n)
{
    double ans=1;
    for (int i = 0; i < n; ++i)
    {

        ans *= mid;
    }
    return ans;
}

double eps = 1e-6;
int main()
{
    double x;
    int n;
    cin >> x >> n;
    double lo = 1, hi = x, mid;
    while (hi - lo > eps)
    {
        mid = (hi + lo) / 2;
        if (multiply(mid,n) < x)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    cout << setprecision(10) << lo << "\n"
         << hi << endl;
}

//N*(log(10*d)) --> d is precision, N is 
// N-N+1: 10^d Numbers
// 1-N:N*(10^d) Numbers
// TC : p* log(N*(10^d))
// for pth root of Number N
// with d decimal accuracy