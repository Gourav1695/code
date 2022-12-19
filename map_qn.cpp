/*
Given N string, print unique strings
in lexiographical order with their
frequency 
n<=10^5
|s|<=100
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	std::map<string, int> m;
	int n ;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin>>s;
		m[s]=m[s]+1;
		// m[s]++; //can also be used 

	}
	for(auto pr : m){
		cout<<pr.first<<" "<<pr.second<<endl;
		
	}
}