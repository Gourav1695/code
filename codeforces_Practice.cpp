// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while (t--)
// 	{
// 		int n,q;
// 		cin>>n>>q;
// 		int a[n+10];
// 		for(int i=1; i<=n; ++i)
// 		{
// 			cin>>a[i];
// 		}
// 		while(q--){
// 			int l,r;
// 			cin>>l>>r;
// 			int gc=0;
// 			for(int i=1; i<=l-1;++i)
// 			{
// 				gc=__gcd(gc,a[i]);
// 			}
// 			for(int i=r+1; i<=n;++i)
// 			{
// 				gc=__gcd(gc,a[i]);
// 			}
// 			cout<< gc<<endl;
// 		}
// 	}
// }
//tc = O(T*(N+Q*(N)))= O(T* N + T* N* Q)
 // 100^3 =10^6  that's why first subtask pass the test cases


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while (t--)
// 	{
// 		int n,q;
// 		cin>>n>>q;
// 		int a[n+10];
// 		int forward[n+10];
// 		int backward[n+10];
// 		forward[0]= backward[n+1]=0;
// 		for( int i=1; i<=n;++i)
// 		{
// 			cin>>a[i];
// 		}
// 		for(int i=1;i<=n;++i)
// 		{
// 			forward[i]=__gcd(forward[i-1],a[i]);
// 		}
// 			for(int i=n;i>=1;--i)
// 		{
// 			backward[i]=__gcd(backward[i+1],a[i]);
// 		}
// 		while(q--){
// 			int l,r;
// 			cin>>l>>r;
// 			cout<< __gcd(forward[l-1],backward[r+1])<<endl;

// 		}
// 	}
// }
//O(T * (N+N))= 10^6


#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
 long long int ar[N];

int main(){
	int n,m;
	cin>>n>>m;
	while (m--){
		int a,b,d;
		cin>>a>>b>>d;
		// for(int i=a;i<=b;++i)
		// {
		// 	ar[i]+=d;
		// }
		ar[a]+=d;
		ar[b+1]-=d;

	}
	for(int i=1; i<=n; ++i)
	{
		ar[i]+=ar[i-1];
	}
	long long mx=-1;
	for (int i = 1; i <=n; ++i)
	{
		if(mx<ar[i])
		{
			mx=ar[i];
		}
	}
cout<<mx<<endl;
}

// O(m*n+n)= 2*10^5 * 10^7= 10^12