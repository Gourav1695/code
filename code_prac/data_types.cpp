string str= "Hello";
	string str2="Hello";
	string result= str+ str2;
	if( str== str2)
	{
		cout<< " equal ";
	}
	else {
		cout<< " Not Equal";

	}
	string str= "Hello";
	// str[0]='a';
	// // str[0]="a";//it cannot be done as '' is for character only " " for string 
	// cout<<str.size();
	for ( int i=0; i< str.size();++i){
		cout<< str[i]<<endl;
	}
	string str1, str2;
	cin>> str1>>str2;
	cout<<str1<< " "<<str2<<endl;
	string str1, str2;
	getline(cin,str1);
	getline(cin,str2);
	cout<<str1<<endl;
	cout<<str2<<endl;
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline ( cin, s);
		cout<< s<< endl;
	}
NOTE: cin executes after the new line or backslace

	string str;
	cin>>str;
	string str_rev;
	for( int i= str.size()-1;i>=0;--i){
		str_rev=str_rev+str[i];

	}	
	cout<<str_rev;//we should not do like this because of time coplexicity and here we adding string with character that is not good
string str;
cin>> str;
string str_rev;
for( int i= str.size()-1; i>=0;--i){
	str_rev.push_back(str[i]);
}
if( str==str_rev){
	cout<<"YES";

}else {
	cout<<"NO";
}
	string s;
	cin>>s;
	int last_digit= s[s.size()-1]-'0';
	cout<< last_digit;
	int n;
	cin>>n;
	int a[n];
	for( int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	int sum=0;
	for(int i=0; i<n;++i){
		sum= sum+a[i];
	}
	cout<<sum;
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for( int i=0;i<n;++i)
	{
		for( int j=0;j<m;++j){
			cin>>a[i][j];
		}
	}
	for( int i=0;i<n;++i)
	{
		for( int j=0; j<m;++j )
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	int n=1e5;
	int n=1e7;//I can't define as locally array can store upto 1e5 only

	int a[n];
	a[n-1]=7;
	cout<<a[n-1];
	* -> read as value at
	int x=4;
	int *p_x=&x;
	cout<< "Addr x: "<<&x<<endl;
	cout<<"Val p_x: "<<p_x<<endl;
	cout<< "val *p_x: "<<*p_x<<endl;
	*p_x=5;//*p_x is read as value at p_x
	cout<< "x: "<<x<<endl;
	cout<< "p_x+1: "<<p_x+1<<endl;
	int **p_p_x=&p_x;
	cout<< "Addr p_x: "<<&p_x<<endl;
	cout<< "val p_p_x: "<<p_p_x<<endl;
	cout<< "val *p_p_x:"<<*p_p_x<<endl;
	cout<<" val **p_p_x: "<<**p_p_x<<endl;
	**p_p_x=7;
	cout<< "x: "<<x<<endl;
	int a[10];
	a[0]=2;
	a[1]=4;
	cout<< "a: "<< a<< endl;
	cout<< "&a[0]: "<<&a[0]<<endl;
	cout<< "*a: "<<*a<<endl;
	cout<< "a+1 :"<<a+1<< endl;
	cout<< "&a[1]: "<< &a[1]<<endl;
	cout<< "*(a+1): "<< *(a+1)<< endl;

	int x;
	int sum=0;
	sum= x+x;
	int n;
	for (int i = 0; i < n; ++i)
	{
		int y;
		y=5;
		y++;
	}

}	

Number of iterations =3;
n<100000
O(5)+O(3*n)
O(n)
		
