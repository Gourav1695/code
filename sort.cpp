#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	// int a[n];
	vector<int>a(n);
	for(int i=0;i<n;++i )
	{
		cin>>a[i];
	}
	// sort(a, a+n);//first arg is starting index and the second argument is for the pointer after the last element
	sort ( a.begin(),a.end());

	for(int i=0; i<n;++i){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}