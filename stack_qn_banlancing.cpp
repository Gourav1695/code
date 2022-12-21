#include <bits/stdc++.h>
using namespace std;

unordered_map<char,int>symbols={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};

string isBalance(string s)
{
	stack<char>st;
	for(char brackets :s)
	{
		if (symbols[brackets]<0)
		{
			st.push(brackets);
		}
		else{
			if(st.empty()) return "NO";
			char top = st.top();
			st.pop();
			if(symbols[top]+symbols[brackets]!=0){
				return "NO";
			}
		}
	}
	if(st.empty()) return "YES";
	else return "NO";

}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<isBalance(s)<<endl;
	}
}
