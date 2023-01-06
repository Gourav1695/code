// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	1.inbuit implementation-- hash table
// 	2.time complexicity-- O(1)
//  3.valid keys datatype 
// }
#include <bits/stdc++.h>
using namespace std;
void print (unordered_map<int, string>&m){
	cout<<m.size()<<endl;
	for(auto &pr : m){
		cout<<pr.first<<" "<<pr.second<<endl;

	}
}

//unordered_map used inbuilt hash
// excess time complexity is log(n)
// insertion time complexity is log(n);

// all have unique value
int main(){
	// unordered_map<int , string>m;
	map<pair<int,int> , string>m;

	// m[1]="abc";//O(log(1))
	// m[5]="cdc";
	// m[3]="acd";
	// m.insert({4,"afg"});
	 
	// m["abcd"]="abcd";// s.size()*log(1)
	// map<int, string>:: iterator it;
	
	// for(it = m.begin(); it!=m.end(); ++it){
	// 	cout<<(*it).first<<" "<<(*it).second<<endl;

	// }maps always in sorted order
	// and string will pring in lexicographical order


	//second way to print the output

	// for (auto & pr :m){
	// 	cout<<pr.first<<" "<<pr.second<<endl;
	// }
// for find operation is also O(log(n))
	// auto it = m.find(7);// find return the iterators
	// m.erase(3);//O(log(1)) here n is size of map
	// if (it==m.end())
	// {
	// 	cout<<"NO value";
	// }
	// else
	// {
	// 	cout<<(*it).first<<" "<<(*it).second;

	// }

	// auto it = m.find(8);
	// if(it!=m.end())
	// m.erase(it);
	// m.clear();//for clear all
	// print(m);
}

