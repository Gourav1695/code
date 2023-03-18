#include <bits/stdc++.h>
using namespace std;

const int N=10^5;
vector<int >g[N];
// vector<vector<int >>cc;
// vector<int>componenent_cc;

bool vis[N];
bool dfs(int vertex,int par){// here par is for parent
	//Take action on vertex after entering
	// the vertex
	// bool cycle=false;
	bool isLoopExists= false;
	// if(vis[vertex] ) return ;// we can use this also instead of putting it inside 
	
	// cout<<vertex<<endl;
	vis[vertex]= true;
	// componenent_cc.push_back(vertex);

	for(int child: g[vertex]){
		// cout<<"par"<<vertex<<", child"<<child<<endl;
		if(vis[child] && child==par) continue;// we can use this also instead of putting it inside 
		if(vis[child]) return true;
		// if(vis[child]) continue;
		//Take action on child before 
		// entering the child node 

		isLoopExists|=dfs(child,vertex);
		//Take action on child 
		// after exiting child node 
	}
	//Take action on vertex before 
	// exiting the vertex
return isLoopExists;
}
// O(V+E)

int main(){
	int v, e;
	cin>>v>>e;
	for(int i=0; i<e;i++){
		int v1, v2;
		cin>>v1>>v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}
	bool isLoopExists=false;
	for(int i=1; i<=v;i++){
		if(vis[i]==true) {
			continue;
		}

		if(dfs(i,0)){
			isLoopExists=true;
			break;
		}
	}
	cout<<isLoopExists<<endl;
}
