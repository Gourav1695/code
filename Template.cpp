#include <bits/stdc++.h>
using namespace std;

// void init_code()
// {
// 	#ifndef ONLINE_JUDGE
// 		freopen("input.txt","r",stdin);
// 		freopen("output.txt", "w",stdout);
// 	#endif
// }

// cout<<*max_element(arr, arr+n)<<endl;
const int Mod = 1e9 + 7;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int countTheNoOfDigits(int n){
	int count =0;
	while(n>0){
		n = n/10;
		count++;
	}
	return count;
}

bool palindrome(const string &s) {
    int n = s.length();
    for(int i = 0; i < n; i++) {
        if(s[i] != s[n - i - 1]) return false;
    }
    return true;
}

int findLastDigit(int n){
	while(n>=10)
		n= n/10;
	return n;
}

int gcd(int a, int b) {
    // Keep finding the remainder until b becomes 0
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
    long long n,m,i,j;
    cin>>n;

    
     int arr[n];
    // int brr[n];
    // int temp= 1;
    // int ans=0;
    // for(auto &e : arr)
    // {
    //     cin>>e;
    // }
    
    // cout<<ans<<endl;
  
}

int main()
{
	// init_code();
	ios::sync_with_stdio(false);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
