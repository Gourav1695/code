#include <bits/stdc++.h>
using namespace std;
//set is the collection of elements uniquily

void print(set<string>&s){
	for(string value : s)
	{
		cout<< value<<endl;
	}
	// for (auto it= s.begin(); it!=s.end();++it){
	// 	cout<<(*it)<<endl;
	// }

}

int main()
{
	set<string>s;
	s.insert("abc");
	s.insert("adfg");
	s.insert("bdc");//log(n)
	s.insert("bdc");
	//find return the iterator
	// auto it=s.find("bdc");//log(n)
	// if(it!=s.end()){
	// 	cout<<(*it)<<endl;
	// }
	// auto it=s.find("bdc");//log(n)
	// if(it!=s.end()){
	// 	s.erase(it);
	// }
	s.erase("abc");
	print(s);
}