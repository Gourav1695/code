#include <bits/stdc++.h>
using namespace std;

const int M =1e9+7;
// O(n) --> not good time complexicity

int main(){
	int a=5, b=13;
	int ans=1;
	for(int i=0; i<b;++i){
		ans*=a;
		ans%=M;
	}
	cout<<ans;
}