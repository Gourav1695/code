#include <bits/stdc++.h>
using namespace std;

const int N= 1e7+10;
vector<bool>isPrime(N,1);

int main()
{
	isPrime[0]=isPrime[1]=false;
	for(int i=2;i<N;i++){
		if(isPrime[i]==true){
			for(int j=2*i;j<N;j+=i)
			{
				isPrime[j]=false;
			}
		}
	}
	// time complexicity-> N* log(log(N))
	// for(int i=1; i<=100; i++){
	// cout<<	isPrime[i]<<endl;
	// }

	int q;
	cin>>q;
	while(q--){
		int num;
		cin>>num;
		if(isPrime[num]==true){
			cout<<"It is a Prime."<<endl;
		}
		else{
			cout<<"Not a Prime Number"<<endl;
		}
	}
	// If we calculate Prime for each case than the time complexicity will be q * sqrt(N)
	
}
