#include <bits/stdc++.h>
using namespace std;

const int N= 1e3+10;
int graph1[N][N];
// vector<int>graph2[N];
vector<pair<int, int> >graph2[N];


int main(){
	int n, m;
	cin>>n>>m;
	for(int i=0; i<m;++i){
		int v1, v2,wt;
		// cin>>v1>>v2;
		// graph1[v1][v2]=1;
		// graph1[v2][v1]=1;

		// for weight graph 
		 cin>>v1>>v2>>wt;
		graph1[v1][v2]=wt;
		graph1[v2][v1]=wt;
		// graph2[v1].push_back(v2);
		// graph2[v2].push_back(v1);
			graph2[v1].push_back({v2,wt});
			graph2[v2].push_back({v1,wt});
	}
	// Adjacency matrix
	// some problen in this approach is that 
	// 1.  is space complexicity - O(N^2)
	// 2. if N=10^5 we couldnot be able to store the graph as the space complixicity is O(N^2) so beyond N=10^4 we couldnot compute
	for(int i=1;i<=n;i++){
		for(int j=1; j<=m;j++){
			cout<<graph1[i][j]<<" ";
		}
		cout<<endl;
	}

	// i, j connected ? i, j>wt?
	int i =3 ,j=4;
	if(graph1[i][j]==4){
		cout<<"connected"<<endl;// which is O(1) operation
	}
	cout<<graph1[i][j]<<endl;
	// in adjancecy list it is o(n) operation
	// for(int child: graph2[i]){
	// 	if(child==j){
	// 		cout<<"connected"<<endl;
	// 	}
	// }
	for(pair<int, int> child: graph2[i]){
		if(child.first==j){
			cout<<child.second<<endl;
		}
	}
	for(int i=1;i<=n;i++){
	for(auto child : graph2[i]){
		 cout<<child.first<<" "<<child.second<<" ";
	}
	cout<<endl;
}
	
}

// for Adjancency list 
// O(N+M) , where N is no. of vertices and M is no. of edges
// N=10^5 is possible to compute

