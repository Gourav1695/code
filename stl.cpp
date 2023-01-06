#include <bits/stdc++.h>
using namespace std;

	// pair stl

	// pair<int , string> p;
	// // p = make_pair(2,"abc");
	// p= {2,"gourav"};
	// // pair<int,string>p1 =p;//not change the original valuse as it is not pass by references
	// pair<int,string>&p1=p;	// here p1 is passed by references so the original copy is changed

	// p1.first =3;
	// cout<< p.first<<" "<<p.second<<endl;

	// int a[]={1,2,3};
	// int b[]= {2,3,4};
	// pair <int ,int > p_array[3];
	// p_array[0]={1,2};
	// p_array[1]={2,3};
	// p_array[2]={3,4};

	// swap(p_array[0],p_array[2]);
	// for (int i = 0; i < 3; ++i)
	// {
	// 	cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
	// }

	// taking input in pair

	// pair<int, string>p;
	// cin>>p.first;
	// cout<<p.first;

	// void printVec(vector<string> &v)
	// {
	// 	cout<<"size : "<< v.size()<<endl;
	// 	for (int i = 0; i < v.size(); ++i)
	// 	{
	// 		//v.size() -->O(1);
	// 		// cout<<v[i]<<" ";
	// 		cout<<v[i]<<endl;
	// 	}
		
	// 	cout<<endl;
	// }
	// int main(){
	// 	// vector<int >v;
	// 	// // vector<int>v(10);
	// 	// // vector<int>v(10,3);
	// 	// v.push_back(7);//dynamic in nature// puch_back add to the last the vector --> O(1)
	// 	// v.push_back(6);
	// 	// // int n;
	// 	// // cin>>n;
	// 	// // for(int i =0; i<n;++i)
	// 	// // {
	// 	// // 	int x;
	// 	// // 	cin>>x;
	// 	// // 	printVec(v);
	// 	// // 	v.push_back(x);
	// 	// // }
	// 	// vector<int>&v2 =v;//O(n) copying
	// 	// v2.push_back(5);
	// 	// printVec(v);
	// 	// // v.pop_back();// pop_back pop from the last --> O(1)
	// 	// printVec(v2);
	// 	// printVec(v);

	// 	vector<string>v;
	// 	int n;
	// 	cin>>n;
	// 	for(int i=0; i<n;++i)
	// 	{
	// 		string s;
	// 		cin>>s;
	// 		v.push_back(s);
	// 	}
	// 	printVec(v);
	// }

//here we are 
void printVec(vector<pair<int, int>> &v)
	{
		cout<<"size : "<< v.size()<<endl;
		for (int i = 0; i < v.size(); ++i)
		{
			//v.size() -->O(1);
			// cout<<v[i]<<" ";
			cout<<v[i].first<<" "<<v[i].second<<endl;
		}
		
		cout<<endl;
	}



// int main()
// 	{
// 		vector<pair<int, int>> v={{1,2},{2,3},{4,5}};
// 		printVec(v);
// 	}
	int main()
	{
		vector<pair<int, int>> v;
		printVec(v);
		int n;
		cin>>n;
		for(int i=0;i<n;++i){
			int x,y;
			cin>>x>>y;
			// v.push_back({x,y});
			v.push_back(make_pair(x,y));

			printVec(v);
		}
		printVec(v);
	}

