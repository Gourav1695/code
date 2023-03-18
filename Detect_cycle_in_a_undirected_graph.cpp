//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
//   const int N=10^5;
    // vector<int >g[N];
// vector<vector<int >>cc;
// vector<int>componenent_cc;

// bool vis[N];
bool dfs(int vertex,int par,vector<int>g[],bool vis[]){// here par is for parent
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

		isLoopExists|=dfs(child,vertex,g,vis);
		//Take action on child 
		// after exiting child node 
	}
	//Take action on vertex before 
	// exiting the vertex
return isLoopExists;
}
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        bool isLoopExists=false;
        bool vis[V+10];// making this once again as it will reincilize for each test case
        for(int i=0; i<=V;i++){
            vis[i]=0;
        }// incilize all the visited node as 0 means it is not visited yet
	for(int i=0; i<V;i++){
		if(vis[i]==true) {
			continue;
		}

		if(dfs(i,-1,adj,vis)){
// 			isLoopExists=true;
        return true;
		
		}
	}
return false;

    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends
