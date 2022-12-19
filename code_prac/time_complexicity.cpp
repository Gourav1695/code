
/*Given T Testt cases and in eachh test case a number N. Print its factorial for each test case %M
where M=10^9+7.
constraints
1<=T<=10^5
1<=N<=10^5
*/
const int M=1e9+7;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>>n;
		long long fact =1;
		for (int i=2; i<=n;++i){
			fact = ( fact *i)%M;
		} 
		cout<< fact%M << endl;
	}
	O(T*N)==10^10


const int M=1e9+7;
const int N = 1e5+10;
long long fact [N];
int main()
{
	fact[0]=fact[1]=1;
	for( int i=2; i<N;++i)//precomputation done here to reduce the complexity

	{
		fact[i]=fact [i-1]*i;
	}
	int t;
	cin>>t;
	while ( t--)
	{
		int n;
		cin>>n;
		// long long fact=1;
		// for( int i=2;i<=n;++i){
		// 	fact =(fact*i)%M;

		// }
		cout<<fact[n] << endl;

	}
}
O(N)+O(T)=10^5+10^5=10^5

int main()
{
	int n;
	cin>>n;
	int a[n];
	for( int i=0;i<n; ++i)
	{
		cin>>a[i];
	}
	int q;
	cin>>q;
	while (q--){
		int x;
		cin>>x;
	int ct=0;
	for ( int i=0; i<n;++i)
	{
		if( a[i]==x)
		{
			ct++;
		}

	}
	cout<< ct<< endl;
  }
//O(N)+O(Q*N)=O(N^2)=10^10
}
