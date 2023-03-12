#include <bits/stdc++.h>
using namespace std;

const int N= 1e7+10;
vector<bool>isPrime(N,1);
vector<int>lp(N,0), hp(N,0);

int main()
{
	isPrime[0]=isPrime[1]=false;
	for(int i=2;i<N;i++){
		if(isPrime[i]==true){
			lp[i]=hp[i]=i;// for prime numbers
			for(int j=2*i;j<N;j+=i)
			{
				isPrime[j]=false;
				hp[j]=i;// this will update many times like for 6 it changes from 2 to 3.
				if(lp[j]==0){// This will update only one time
					lp[j]=i;
				}
			}
		}
	}
	// for(int i=1; i<=1000; i++){
	// 	cout<<lp[i]<<" "<<hp[i]<<endl;
	// }
	// finding prime factors
	int num;
	cin>>num;
	map<int, int >prime_factors;
	while(num >1){
		int prime_factor=hp[num];
		while(num%prime_factor==0){
			num=num/prime_factor;
			prime_factors[prime_factor]++;
		}

	}
	// here we are computing the prime factors in logn time complexicity 
	
	for(auto x:prime_factors){
		cout<<x.first<<" "<<x.second;
		cout<<endl;
	}

}