#include <bits/stdc++.h>
using namespace std;

vector<string>valid;

//function defination
void generate(string &s,int open,int close)// making the defination of function
// open,close-> are the remaining brackets to use in the string 

{	if(open==0 && close==0){
	valid.push_back(s);
	return ;
}
	// generate(s, open, close); //if we use s not &s then copy will be made that increases the time complexicity so we should pass with reference
	if(open>0){
		s.push_back('(');
		generate(s,open-1,close);
		s.pop_back(); //backtracking

	}
	if(close>0){
		// we have to check count of open should be greater than close in string
		if(open<close){
			s.push_back(')');
			generate(s,open,close-1);
			s.pop_back();
		}
	}
}

int main(){
	int n;
	cin>>n;
	string s;
	generate(s,n,n);
	
	for(auto element : valid){
		cout<<element<<endl;
	}

}