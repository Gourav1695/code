date : 15 october 2022
Iterators

#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v={2,3,4,5,6,7};
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	// vector<int >::iterator it =v.begin();
	// cout<<(*(it))<<endl;
	// 	// vector<int >::iterator it =v.begin();
	// cout<<(*(it+1))<<endl;
	// for(it=v.begin();it!=v.end();++it){
	// 	cout<<(*it)<<" ";
	// }
	for(auto it = v.begin();it!=v.end();++it)
	{
		cout<<(*it)<<" ";
	}
	cout<<endl;
	// for pair
	vector<pair<int,int>>v_p={{1,2},{4,5}};
	// for(pair<int,int>&value:v_p){
	// 	cout<<value.first<<" "<<value.second<<endl;
	// }
	for(auto &value:v_p){
		cout<<value.first<<" "<<value.second<<endl;
	}


	for(int value : v){
		value++;
		cout<<value<<" ";
	}
	for(int value : v){
		// value++;
		cout<<value<<" ";
	}
	vector<pair<int, int >>v_p={{1,2},{3,8}};
	for(auto &value : v_p){
		cout<<value.first<<" "<<value.second<<endl;
	}

	auto a=1.0;
	cout<<a<<endl;

	cout<<endl;

}
