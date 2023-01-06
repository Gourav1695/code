#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;++i){
		cin>>v[i];
	}
	int min = *min_element(v.begin()+3, v.end());
	cout<<min<<endl;
	int max= * max_element(v.begin(),v.end());
	cout<<max<<endl;
	int sum = accumulate(v.begin(),v.end(),0);// here 0 is the initial sum
	cout<<sum<<endl;
  	// int ct = count(v.begin(),v.end(),5);
  	// cout<<ct<<endl;
  	int ct = count(v.begin()+1,v.end(),4);
  	cout<<ct<<endl;
  	auto it = find(v.begin(),v.end(),4);
  	if(it!=v.end())
  		cout<<*it<<endl;
  	else
  		cout<<"Element not found"<<endl;

  	reverse(v.begin()+3,v.end());
  	for(auto val: v){
  		cout<<val<<" ";
  	}
  	string s= "ablkjfgkdfg";
  	reverse(s.begin(),s.end());
  	cout<<s<<endl;
}
// all this fuction is of O(n) in vector and array
