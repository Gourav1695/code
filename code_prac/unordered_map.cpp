unordered_map

#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int,string >&m){
	cout<<m.size()<<endl;
	for(auto &pr:m){

		cout<<pr.first<<" "<<pr.second<<endl;
	}
}
int main(){
unordered_map<int,string>m;
	m[1]="abc";//O(1)
	m[5]="cdc";
	m[3]="acd";
	m[6]="a";
	m[5]="cde";

auto it =m.find(7); //O(1)

	if(it!=m.end())
		m.erase(it);//O(1)
	print(m);
}
the unordered_map are internally implemented by the use of hash table
for map we can use any
data type for the key value but for the unodered
map the complex datatype are not dafind//
as it is not impleneted interally for the undered map but we can use complex date type in map as it works on the basis of comparison

