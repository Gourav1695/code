#include <bits/stdc++.h>
using namespace std;

const int N=10^5;
vector<int >g[N];
int depth[N],height[N];

void dfs(int vertex,int par=0){
	//Take action on vertex after entering
	// the vertex--> This

	for(int child: g[vertex]){
		
		if(child==par) continue;
		depth[child]=depth[vertex]+1;
		//Take action on child before 
		// entering the child node-->this (this section we used wehen we coming down) 

		dfs(child,vertex);
		//Take action on child 
		// after exiting child node -->this1
		height[vertex]=max(height[vertex],height[child]+1);
	}
	//Take action on vertex before 
	// exiting the vertex --> this1, (this1 section are used when we are coming upwards)

}
// O(V+E)

int main(){
	int n;
	cin>>n;
	for(int i=0; i<n-1;i++){
		int v1, v2;
		cin>>v1>>v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
			dfs(1);
		
	}

	
	for(int i=1; i<=n;++i){
		cout<<depth[i]<<" "<<height[i]<<endl;
	}
}