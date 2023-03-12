#include <bits/stdc++.h>
using namespace std;

const int N= 1e5+10;
// vector<bool>isPrime(N,1);
vector<int>Divisons[N];

int main()
{
	// isPrime[0]=isPrime[1]=false;
	for(int i=2;i<N;i++)
	{
	
			for(int j=i;j<N;j+=i)
			{
				Divisons[j].push_back(i);
			}
	}
	for(int i=1; i<10; i++){
		for(int div: Divisons[i]){
			cout<<div<<" ";
		}
		cout<<endl;
	}
}
