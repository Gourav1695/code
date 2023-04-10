#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

// 0 1 1 2 3 5 8

// fib(n)-->nth fib number
// Here dp state is n means 1D dp

int dp[N];

// If there is 2D dp
// int dp[N][M];
// TOP DOWN APPROACH
// int fib(int n, int y){
// 		if(n==0) return 0;
// 		if(n==1) return 1;
// 		if(dp[n][y]!=-1){
// 			return dp[n][y];
// 		}
// 		return dp[n][y]=fib(n-1)+fib(n-2);
// }
int fib(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	if(dp[n]!=-1)  return dp[n]; // memoise

 return dp[n]= fib(n-1)+fib(n-2);// in this one line the value will be assign and return also

}
int main(){
	memset(dp,-1,sizeof(dp)); // fill the dp array with -1
	int n;
	cin>>n;
	//BOTTOM UP APPROACH
	// dp[0]=0;
	// dp[1]=1;
	// for(int i=2;i<=n;++i){
	// 	dp[i]=dp[i-1]+dp[i-2];
	// }
	// cout<<dp[n];
	cout<<fib(n)<<endl;
}