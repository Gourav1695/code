#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	// int*ptr = lower_bound(a, a+n,5);
	// cout<<(*ptr)<<endl;
	auto it = lower_bound(a.begin(), a.end(),26);

	auto it2 = upper_bound(a.begin()+4, a.end(),5);
	cout<<(*it2)<<endl;
	if(it==(a.end())){
		cout<<"Not found";
		return 0;
	}
	cout<<(*it)<<endl;
	
}
// both works in O(logn), where n is array size
// use of lower_bound -> if the search value is present than return the same value else return the next large value of the search value
// use of upper_bound -> only returns the large value than the searched value if the searched value is present than also it return the large value
// both returns the locations
// in case of vector it returns iterators
// and in case of array it returns pointers


