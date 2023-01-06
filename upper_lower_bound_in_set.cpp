#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	set<int>s;
	map<int,int>m;
	for(int i=0;i<(int)(1e6);++i){
		s.insert(rand());
	}
	for(int i=0;i<(int)(1e5);++i){
		auto it= s.lower_bound(rand());
		// auto it= lower_bound(s.begin(),s.end(),rand());

	}
}
// for array and vector binary search is used interally
// for set and maps tree are used internally
