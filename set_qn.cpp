/* Given N string , print 
unique strings
in lixiographical order 
N<=10^5
|S|<=100000
*/

#include <bits/stdc++.h>
using namespace std;
//internal implementation is done using red black tree

int main()
{
	set<string>s;
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		string str;
		cin>>str;
		s.insert(str);
		
	}
	for(auto value: s)
		{
			cout<<value<<endl;
		}
}