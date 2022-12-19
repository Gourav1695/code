#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v= {2,3,4,5,6};
	for (int i =0;i<v.size();++i){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	// vector<int>::iterator it;

	// for (it =v.begin();it!=v.end();++it){
	// 	cout<<(*it)<<" ";
	// }

	for ( auto it =v.begin();it!=v.end();++it){
		cout<<(*it)<<" ";
	}
	for (int &value1 : v){
		value1++;
		// cout<<value <<" ";
	}
	vector<pair<int, int >>v_p={{1,2},{2,3}};
	// for(pair<int,int>&value:v_p){
	// 	cout<<value.first<<" "<<value.second<<endl;
	// }


	for( auto &value:v_p){
		cout<<value.first<<" "<<value.second<<endl;
	}

	for (int vlue : v){
		cout<<vlue <<" ";
	}
auto a=1;
cout<<a<<endl;


	cout<<endl; 
}