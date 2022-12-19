// // set for competitive programming


// #include<bits/stdc++.h>
// using namespace std;

// void print(set<string>&s){
// 	for (string value :s){
// 		cout<<value<<endl;
// 	}
// 	// for(auto it=s.begin();it!=s.end();++it){
// 	// 	cout<<(*it)<<endl;
// 	// }
// }

// int main ()
// {
// 	set<string>s;
// 	s.insert("abc");//log(n)
// 	s.insert("zsdf");
// 	s.insert("fbfd");
// 	s.insert("abc");

// 	auto it = s.find("zsdf");// log(n)
// 	// if(it!=s.end()){
// 	// 	cout<<(*it);
// 	// }
// 	// if(it !=s.end()){
// 	// 	s.erase(it);
// 	// }

// 	s.erase("abc");
// 	print(s);


// return 0;

// }

/*
 Given N string , print unique strings
 in lexiographical order
 N<=10^5
 |S|<=100000
 */


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	set<string>s;
// 	int n;
// 	cin>>n;
// 	for(int i=0;i<n;++i){
// 		string str;
// 		cin>>str;
// 		s.insert(str);
// 	}
// 	for(auto pr: s){
// 		cout<<pr<<endl;
// 	}

// }

/*Qn for unordered set
given N string and Q queries In each query you are given a string print yes if 
string is present else print no.

N<=10^6
|S| <= 100
 Q<= 10^6
 */

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	unordered_set<string>s;
// 	// 
// 	int n;
// 	cin>>n;
// 	for(int i=0;i<n;++i){
// 		string str;
// 		cin>>str;
// 		s.insert(str);
// 	}
// 	int q;
// 	cin>>q;
// 	while (q--){
// 		string str;
// 		cin>>str;
// 		if(s.find(str)==s.end()){
// 			cout<<"no\n";
// 		}else{
// 			cout<<"yes\n";
// 		}
// 	}
// }

// unordered set use

// #include<bits/stdc++.h>
// using namespace std;


// void print(unordered_set<string>&s){
// 	for (string value :s){
// 		cout<<value<<endl;
// 	}

// int main ()
// {
// 	unordered_set<string>s;
// 	s.insert("abc");//O(1)
// 	s.insert("zsdf");
// 	s.insert("fbfd");
// 	s.insert("abc");

// 	auto it = s.find("zsdf");// O(1)
// 	// if(it!=s.end()){
// 	// 	cout<<(*it);
// 	// }
// 	if(it !=s.end()){
// 		s.erase(it);
// 	}

// 	s.erase("abc");
// 	print(s);

// }

//  multiset use  

#include<bits/stdc++.h>
using namespace std;


void print(multiset<string>&s){
	for (string value :s){
		cout<<value<<endl;
	}
}

int main()
{
	multiset<string>s;
	s.insert("abc");//O(log(n))
	s.insert("zsdf");
	s.insert("fbfd");
	s.insert("abc");

	auto it = s.find("abc");// O(log(n))
	// if(it!=s.end()){
	// 	cout<<(*it);
	// }
	// if(it !=s.end()){
	// 	s.erase(it);// delete only the 1st value
	
	// }

	s.erase("abc");// this will delete all the abc

	print(s);

}

// note for the multiset: if we erase the value by iterator than it only delete the value of 1st duplicate not all

