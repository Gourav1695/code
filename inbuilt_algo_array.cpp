#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int v[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	int sum = accumulate(v,v+n,0);
	cout<<sum<<endl;
	int ct= count(v,v+n,2);
	cout<<ct<<endl;
	auto it= find(v,v+n,6);
	if(it!=v+n)
		cout<<*it<<endl;
	else
		cout<<"Element not found\n";
	reverse(v+2,v+n);
	for(auto val : v){
		cout<<val<<" ";
	}
	cout<<endl;
	string s = "fgsrgsrghhhts";
	reverse(s.begin(), s.end()) ;
	cout<<s<<endl;

}