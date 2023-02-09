#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
// O(log n)
// a<=10^9 , b<=10^9, M<=10^9

// a<=10^18 or a<=2^1024
// very important concept
long long binMultiply(long long a, long long b){
long long ans=0;// as we are adding
	while(b>0){ // for eg b=13
		if(b&1){
			ans=(ans+a)%M;
		}
		a=(a+a)%M;
		// direct multiply of a * a will be overflow as 10^18 *10^18 will be 10^36 which will be overflow
		
		b>>=1;
	}
	return ans;
}

long long binExp(long long a, long long b){
	// a%=M;
	// a = binExp(2, 1024);
// TC -> O(log^2(N))   as while loop is logN and binMultiply is of logN so total log^2(N)

	 long long ans=1;
	while(b>0){
		if(b&1){
			ans=binMultiply(ans, a);
		}
		a=binMultiply(a,a);
		// direct multiply of a * a will be overflow as 10^18 *10^18 will be 10^36 which will be overflow

		b>>=1;
	}
	return ans;
}

int main(){

	cout<<binExp(2,18)<<endl;
}