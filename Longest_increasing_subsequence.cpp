#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int >arr(N);
int dp[N];

int lis(int i){
	if(dp[i]!=-1) return dp[i]; // after using dp the call of function is of linear time complexicity as max no of element 

	int ans=1;
	for(int j=0; j<i;j++){
		if(arr[j]<arr[i]){
			ans= max(ans, lis(j)+1);
		}
	}
	return dp[i]= ans;
}

// this exponential time complexicity
// after using dp it reduces to linear tc

int main(){
	memset(dp, -1, sizeof(dp));
	int n;
	cin>>n;

	// vector<int>vec;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int ans=0;
	for(int i=0; i<n;i++){
		ans=max(ans,lis(i));
	}
	cout<<ans<<endl;

}