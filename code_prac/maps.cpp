maps , ordered map and multimaps

#include<bits/stdc++.h>
using namespace std;

void print(map<int,string >&m){
	cout<<m.size()<<endl;
	for(auto &pr:m){

		cout<<pr.first<<" "<<pr.second<<endl;
	}
}




int main()
{
	// std::map<int, string> m;
	std::map<string, string> m;
	m["abc"]="abded";//s.size()*log(n)
	auto it=m.find(7);
	m[1]="abc";
	m[5]="cdc";
	m[3]="acd";
	m[6]="a";
	m[5]="cde";
	auto it =m.find(3); //O(log(n))
	auto it =m.find(7); //O(log(n))

	if(it!=m.end())
		m.erase(it);
	m.erase(3);
	m.clear();
	print(m);

	if(it== m.end()){
		cout<<"NO value";

	}
	else
	{
		cout<<(*it).first<<" "<<(*it).second;
	}
	m.insert({4,"afg"});
	m[6];
	print(m);
	map<int, string>:: iterator it;
	for(it =m.begin();it!=m.end();++it){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	for(auto &pr: m){
		cout<< pr.first<< " "<<pr.second<< endl;
	}

}
#include<bits/stdc++.h>
using namespace std;

int main ()
{
	map<string, int> m;
	int n;
	cin>>n;
	for(int i =0; i<n;i++){
		string s;
		cin>>s;
		//m[s]=m[s]+1;
		m[s]++;
	}
	for(auto pr: m){
		cout<< pr.first<<" "<<pr.second<<endl;
	}
}


