
vector of vector

int main(){
	int N;
	cin>>N;
	vector<vector<int>>v;
	for (int i = 0; i < N; ++i)
	{
		int n;
		cin>>n;
		vector<int >temp;
		for (int j = 0; j < n; ++j)
		{
			int x;
			cin>>x;
			temp.push_back(x);
		}
		v.push_back(temp);

	}
	v[0].push_back(10);
	v.push_back(vector<int>());
	for (int i = 0; i < v.size(); ++i)
	{
		printVec(v[i]);
	}
	cout<<v[0][1];
	// cout<<v[0][0];
}
in vector of vector we can change the value of row and column at the same time
/ below second way of doing vector of vector
int main(){
	int N;
	cin>>N;
	vector<vector<int>>v;
	for (int i = 0; i < N; ++i)
	{
		int n;
		cin>>n;
	v.push_back(vector<int>());
		for (int j = 0; j < n; ++j)
		{
			int x;
			cin>>x;
			v[i].push_back(x);
		}
		

	}
	v[0].push_back(10);
	
	for (int i = 0; i < v.size(); ++i)
	{
		printVec(v[i]);
	}
	cout<<v[0][1];
	// cout<<v[0][0];
}
