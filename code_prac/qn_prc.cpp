/*
Given array a of N intergers. Given Q queries and in each query given a number X , print count of that number in array.
constraints 
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5
*/

int main()
{
	int n;
	cin>>n;
	int a[n];
	for ( int i=0; i<n;++i){
		cin>>a[i];
	}
	int q;
	cin>>q;
	while ( q--){
		int x;
		cin>>x;
		int ct=0;
		for ( int i=0; i<n; ++i)
		{
			if ( a[i]==x)
			{
				ct++;
			}
		}
		cout<<ct<<endl;


	}

// }
