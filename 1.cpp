// #include <bits/stdc++.h>
// using namespace std;
//ctrl+shift+b --> to compile and run the code ctrl+ shift+3 -- > to split the
//window in 3 parts
// const int n=1e7;//this we can define as  in globaly we can do upto 1e7 order
// 	void printHello(){
// 		cout<<"Hello";
// 	}
// 	int sum( int a, int b)
// 	{
// 		int result  = a+b;
// 		return result;
// 	}
// 	int digit_sum(int n){
// 		int digit_sum=0;
// 		while(n){
// 		digit_sum=digit_sum+n%10;
// 		n=n/10;
// 	}
// 	return digit_sum;
// 	}

	// int increment(int n){
	// 	n++;
	// 	return n;
	// }
	// void increment(int n){
	// 	n++;
	// }
// void increment(int &n){//pass by reference
// 		n++;
// 	}
// void increment(int &n,int n1){
// 	n++;
// 	n1++;
// }
// void swap(int &a, int &b)
// {
// 	int temp=a;
// 	a=b;
// 	b=temp;
// }
// void func(string &s){
// 	s="";
// }
//NOTE: arrays always pass by reference
// void func(int a[])
// {
// a[0]=5;
// }	
// void func(int a[][20])
// {
// a[0][0]=5;
// }	
// const int N=1e3+10;
// int a[N][N];
// void func(){
// 	a[0][0]=5;
// }
// void increment ( int *x){
// 	//(*x)++;
// 	*x=*x+1;
// }

// int main()
// {
	// int a=4;
	// cout<< a<< endl;
	// increment(&a);
	// cout<< a<< endl;
// 	a[0][0]=7;
// 	cout<<a[0][0]<<endl;
// 	func();
// 	cout<< a[0][0]<<endl;
	// int a[10];
	// a[0]=7;
	// cout<< a[0]<<endl;
	// func(a);
	// cout<< a[0]<<endl;

	// int a[10][20];
	// a[0][0]=7;
	// cout<< a[0][0]<<endl;
	// func(a);
	// cout<< a[0][0]<<endl;
	// string s=  "sdfffg";
	// cout<<s<<endl;
	// func(s);
	// cout<<s<<endl;
	// int a=3;
	// int b=5;
	// cout<< a<< " "<< b<<endl;
	// increment(a,b);
	
	// cout<< a<<" "<<b<<endl;
	// int a=3;
	// int b=5;
	// cout<< a<< " "<< b<<endl;
	// swap(a,b);
	// cout<< a<<" "<<b<<endl;
	// int a=3;

	// cout<<a<<endl;
	// a=increment(a);
	// cout<<a<<endl;
	// 	int a=3;
	// cout<<a<<endl;
	// increment(a);//it is pass by value so the copy will be transfered not the real value changed

	// cout<<a<<endl;
	// cout<<sum(90,8);
	// int a,b;
	// cin>>a>>b;
	// cout<<digit_sum(a)+digit_sum(b);
	// // int b=0;
	// string a;
	// cin>>a ;
	// cout<< "hello "<<" "<<a<<endl<<"how are you bro";
	// int a =5;
	// a= a+1;
	// cout<< a<< endl;
	// cout<< a++<< endl;//1st use than increament
	// cout<< a<< endl;//here use the increamented value
	// cout<< ++a<< endl;//1st increment than use
	// char c= 'a';
	// // cout<< ( int )c;
	// char b='c';
	// cout<< c-b;
	// int a;
	// double b;
	// char c;
	// cin>> a>> b>>c;
	// // cout<< a<< " "<<b<<" "<<c<< " " << (int )c;
	// cout<< a<< "\n";
	// for character we use only single cote('')
	// for string we double cots(" ")
	// int a,b, c;
	// char d;
	// cin>>d>>a;
	// cout<< d<< " "<<a;
	// Double 
	// Float 
	// Long Long Int
	// Long Int 
	// Int 
	// Characters
	// these are the precidence order

	// cout<< 'c'+1<<endl;
	// cout<< 7/2*3;//order left to right
	// cout<< 3*7/2;//order left to right
	// -10^9<int<10^9
 // 	-10^12< long int<10^12
 // 	-10^18< long long int<10^18
	// int a= 100000;
	// int b= 100000;
	// int c= a*b;
	// cout<<c<< endl;
	// int mx= INT_MAX;
	// cout<< INT_MAX+1<<endl;//overflow
	//INT_MIN < int< INT_MAX
	// long long int a= 100000;
	// long long int b= 100000;
	// long long int c= a*b;
	// cout<< c<< endl;
	//  int a= 100000;
	//  int b= 100000;
	// long long int c= a*b;
	// cout<< c<< endl;
	
	// double a= 100000;
	// double b= 100000;
	//  // double c= a*b;
	// double c= 1e24;
	//  cout<< fixed<<setprecision(0)<<c<< endl;
	// long long l, b;
	// int l,b;
	// cin>>l>>b;
	// cout<< l*1LL *b<< endl;

	// int i=1;
	// while ( i<=10){
	// 	cout<< i<<endl;
	// 	i++;
	// }
	// for(initialisation;condition;operations){}
	// for (int i = 1; i <=10; ++i)
	// {
	// 	/* code */cout<< i<<endl;
	// }
		// for(int i=1; i<=10;cout<< i++<< endl){}
	// int n;
	// cin>>n;
	// for( int i=1; i<=n; ++i){
	// 	for( int j=1; j<=i;++j){
	// 		cout<< "*";

	// 	}
	// 	cout<< endl;
	// }
	// while(1){//infinite loop

	// }
	// for(int i=0;true;++i){}//infinite loop
	// for( int i=0; i<10;++i){
	// 	if(i==8)
	// 	{
	// 		break;
	// 	}
	// 	cout<<i<<endl;
	// }
	// for( int i=0; i<10;++i){
	// 	if(i==8)
	// 	{
	// 		continue;
	// 	}
	// 	cout<<i<<endl;
	// }
	// while (true){
	// 	int x;
	// 	cin>>x;
	// 	if(x==42){
	// 		break;
	// 	}
	// 	cout<< x<< endl;
	// }
// 	int t;
// 	cin>> t;
// 	while(t--){
// 	int n;
// 	cin>>n;
// 	int digit_sum=0;
// 	while ( n>0)
// 	{
// 		int last_digit=n%10;
// 		digit_sum=digit_sum+last_digit;
// 		n=n/10;

// 	}
// 	cout<< digit_sum<<endl;

// }

	// string str= "Hello";
	// string str2="Hello";
	// string result= str+ str2;
	// if( str== str2)
	// {
	// 	cout<< " equal ";
	// }
	// else {
	// 	cout<< " Not Equal";

	// }
	// string str= "Hello";
	// // str[0]='a';
	// // // str[0]="a";//it cannot be done as '' is for character only " " for string 
	// // cout<<str.size();
	// for ( int i=0; i< str.size();++i){
	// 	cout<< str[i]<<endl;
	// }
	// string str1, str2;
	// cin>> str1>>str2;
	// cout<<str1<< " "<<str2<<endl;
	// string str1, str2;
	// getline(cin,str1);
	// getline(cin,str2);
	// cout<<str1<<endl;
	// cout<<str2<<endl;
	// int t;
	// cin>>t;
	// cin.ignore();
	// while(t--){
	// 	string s;
	// 	getline ( cin, s);
	// 	cout<< s<< endl;
	// }
//NOTE: cin executes after the new line or backslace

// 	string str;
// 	cin>>str;
// 	string str_rev;
// 	for( int i= str.size()-1;i>=0;--i){
// 		str_rev=str_rev+str[i];

// 	}	
// 	cout<<str_rev;//we should not do like this because of time coplexicity and here we adding string with character that is not good
// string str;
// cin>> str;
// string str_rev;
// for( int i= str.size()-1; i>=0;--i){
// 	str_rev.push_back(str[i]);
// }
// if( str==str_rev){
// 	cout<<"YES";

// }else {
// 	cout<<"NO";
// }
	// string s;
	// cin>>s;
	// int last_digit= s[s.size()-1]-'0';
	// cout<< last_digit;
	// int n;
	// cin>>n;
	// int a[n];
	// for( int i=0;i<n;++i)
	// {
	// 	cin>>a[i];
	// }
	// int sum=0;
	// for(int i=0; i<n;++i){
	// 	sum= sum+a[i];
	// }
	// cout<<sum;
	// int n,m;
	// cin>>n>>m;
	// int a[n][m];
	// for( int i=0;i<n;++i)
	// {
	// 	for( int j=0;j<m;++j){
	// 		cin>>a[i][j];
	// 	}
	// }
	// for( int i=0;i<n;++i)
	// {
	// 	for( int j=0; j<m;++j )
	// 	{
	// 		cout<<a[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	// int n=1e5;
	// int n=1e7;//I can't define as locally array can store upto 1e5 only

	// int a[n];
	// a[n-1]=7;
	// cout<<a[n-1];
	// * -> read as value at
	// int x=4;
	// int *p_x=&x;
	// cout<< "Addr x: "<<&x<<endl;
	// cout<<"Val p_x: "<<p_x<<endl;
	// cout<< "val *p_x: "<<*p_x<<endl;
	// *p_x=5;//*p_x is read as value at p_x
	// cout<< "x: "<<x<<endl;
	// cout<< "p_x+1: "<<p_x+1<<endl;
	// int **p_p_x=&p_x;
	// cout<< "Addr p_x: "<<&p_x<<endl;
	// cout<< "val p_p_x: "<<p_p_x<<endl;
	// cout<< "val *p_p_x:"<<*p_p_x<<endl;
	// cout<<" val **p_p_x: "<<**p_p_x<<endl;
	// **p_p_x=7;
	// cout<< "x: "<<x<<endl;
	// int a[10];
	// a[0]=2;
	// a[1]=4;
	// cout<< "a: "<< a<< endl;
	// cout<< "&a[0]: "<<&a[0]<<endl;
	// cout<< "*a: "<<*a<<endl;
	// cout<< "a+1 :"<<a+1<< endl;
	// cout<< "&a[1]: "<< &a[1]<<endl;
	// cout<< "*(a+1): "<< *(a+1)<< endl;

// 	int x;
// 	int sum=0;
// 	sum= x+x;
// 	int n;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		int y;
// 		y=5;
// 		y++;
// 	}

// }	

//Number of iterations =3;
// n<100000
// O(5)+O(3*n)
//O(n)
		
			// int n;
			// cin>>n;
			// int M=47;
			// long long fact =1;
			// for (int i=2;i<=n;++i){
			// 	fact=(fact*i)%M;

			// }
			// cout<<fact;

		



/*Given T Testt cases and in eachh test case a number N. Print its factorial for each test case %M
where M=10^9+7.
constraints
1<=T<=10^5
1<=N<=10^5
*/
// const int M=1e9+7;
// int main()
// {
// 	int t;
// 	cin>> t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		long long fact =1;
// 		for (int i=2; i<=n;++i){
// 			fact = ( fact *i)%M;
// 		} 
// 		cout<< fact%M << endl;
// 	}
	//O(T*N)==10^10


// const int M=1e9+7;
// const int N = 1e5+10;
// long long fact [N];
// int main()
// {
// 	fact[0]=fact[1]=1;
// 	for( int i=2; i<N;++i)//precomputation done here to reduce the complexity

// 	{
// 		fact[i]=fact [i-1]*i;
// 	}
// 	int t;
// 	cin>>t;
// 	while ( t--)
// 	{
// 		int n;
// 		cin>>n;
// 		// long long fact=1;
// 		// for( int i=2;i<=n;++i){
// 		// 	fact =(fact*i)%M;

// 		// }
// 		cout<<fact[n] << endl;

// 	}
// }
//O(N)+O(T)=10^5+10^5=10^5

// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for( int i=0;i<n; ++i)
// 	{
// 		cin>>a[i];
// 	}
// 	int q;
// 	cin>>q;
// 	while (q--){
// 		int x;
// 		cin>>x;
// 	int ct=0;
// 	for ( int i=0; i<n;++i)
// 	{
// 		if( a[i]==x)
// 		{
// 			ct++;
// 		}

// 	}
// 	cout<< ct<< endl;
//   }
// //O(N)+O(Q*N)=O(N^2)=10^10
// }

/*
Given array a of N intergers. Given Q queries and in each query given a number X , print count of that number in array.
constraints 
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5
*/

// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for ( int i=0; i<n;++i){
// 		cin>>a[i];
// 	}
// 	int q;
// 	cin>>q;
// 	while ( q--){
// 		int x;
// 		cin>>x;
// 		int ct=0;
// 		for ( int i=0; i<n; ++i)
// 		{
// 			if ( a[i]==x)
// 			{
// 				ct++;
// 			}
// 		}
// 		cout<<ct<<endl;


// 	}

// }
//O(N)+O(Q*N)=O(N^2)=10^10
// const int N=1e7+10;
// int hsh[N];
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;++i)
// 	{
// 		cin>>a[i];
// 		hsh[a[i]]++;
// 	}
// 	int q;
// 	cin>>q;
// 	while (q--){
// 		int x;
// 		cin>>x;
// 		cout<<hsh[x]<<endl;

// 	}
// }
//O(N)+O(Q)=O(N)=2*10^5

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while (t--)
// 	{
// 		int n, q;
// 		cin>>n>>q;
// 		string s;
// 		cin>>s;
// 		while (q--)
// 		{
// 			int l,r;
// 			cin>>l>>r;
// 			int hsh[26];
// 			for (int i = 0; i < 26; ++i)
// 			{
// 				hsh[i]=0;
// 			}
// 			l--;r--;
// 			for(int i=l;i<=r;++i){
// 				hsh[s[i]-'a']++;
// 			}
// 			int oddCt=0;
// 			for(int i=0; i<26;++i){
// 				if(hsh[i]%2!=0) oddCt++;

// 			}
// 			if(oddCt>1)
// 				cout<<"NO\n";
// 			else 
// 				cout<<"YES\n";
// 		}
// 	}
// }

// void func(int n)
// {
// 	if(n== 0) return ;// op will be 1 2 3 4 5

// 	func(n-1);
// 	cout<<n<<endl;
// }
// int main(){
// 	func(5);
// }

// void func(int n)
// {
// 	if(n== 0) return ;
//     cout<<n<<endl;// op will be 5 4 3 2 1
// 	func(n-1);
	
// }
// int main(){
// 	func(5);
// }

// reccursion for the factorial 
// int fact (int n){
// 	if(n==0) return 1;
// //for the 2nd case	// for (int i = 0; i < count; ++i)

// 	return fact(n-1)*n;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	cout<<fact(n);
// }

// 1. Number of fuction calls --> n
// 2. What is complexity of each fuction --> O(1)
// n*O(1)=O(n)
// for the second case O(n^2)


// int sum(int n, int a[]){
// 	if(n<0) return 0;
// 	return sum(n-1,a)+a[n];

// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin>>a[i];
// 	}
// 	// cout<<sum(n-1,a);
// 	cout<<sum(3,a);
// }
// time compelexity = O(n)

//digit sum 
// digit_sum(n)-> digit_sum(n/10)+last_digit
// 1234 ->4 + digitsum(123)

// int digit_sum(int n){
// 	if(n==0) return 0;
// 	return digit_sum(n/10)+(n % 10);
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	cout<<digit_sum(n);
// }
// 1. Number of function calls -> number of digits in n
// 2.what is complexity of each fuction ->O(1)
//time complexity -> O(logn)

// selection sort 
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;++i){
// 		cin>>a[i];// taking the input for the array

// 	}
// 	for (int i=0; i<n;++i){
// 		int mindIndex=i;//this is the min element index

// 		for (int j = i+1;j<n;++j)
// 		{
// 			if(a[j]<a[mindIndex])
// 			 mindIndex =j;
// 		}
	
// 	swap (a[i],a[mindIndex]);
//  }
// for (int i=0; i<n; ++i){
// 	cout<< a[i]<<" ";
//  }
// }
// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 +10;
// int a[N];
// // l to mid in one array and mid +1 to r in another array
// void merge (int l, int r, int mid)
// {
// 	int l_sz= mid - l + 1;
// 	int L[l_sz + 1];
// 	int r_sz = r- mid;// r-(mid + 1)+1
// 	int R[r_sz +1];

// 	for (int i=0; i<l_sz;++i){
// 		L[i]=a[i+l];
// 	}
// 	for(int i =0; i<r_sz;++i){
// 		R[i]=a[i+mid +1];
// 	}
// 	L[l_sz]=R[r_sz]=INT_MAX;

// 	int l_i=0;
// 	int r_i=0;
// 	for(int i =l; i<=r;++i){
// 		if(L[l_i]<=R[r_i])
// 		{
// 			a[i]=L[l_i];
// 			l_i++;
// 		}
// 		else{
// 			a[i]=R[r_i];
// 			r_i++;

// 		}
// 	}


// }


// // for writting in reccursion first define the function
// //here l means the left index and r means the right index ie. the range in which we are going to sort the array

// void mergeSort(int l, int r){
// 	if(l==r) return;

//   int mid = (l+r)/2;
//   mergeSort(l,mid);
//   mergeSort(mid+1, r);
//   merge(l,r,mid);
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin>>a[i];
// 	}

// 	mergeSort(0,n-1);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cout<<a[i]<<" ";
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std;

// void printVec(vector<int>&v){
// 	cout<<"size: "<<v.size()<<endl;
// 	for(int i=0;i<v.size();++i){
// 		cout<<v[i]<<" ";
// 	}
// 	cout<<endl;
// }

// int main(){
// 	int N;
// 	cin>>N;
// 	vector<int>v[N];
// 	for (int i = 0; i < N; ++i)
// 	{
// 		int n;
// 		cin>>n;
// 		for (int j = 0; j < n; ++j)
// 		{
// 			int x;
// 			cin>>x;
// 			v[i].push_back(x);
// 		}
// 	}
// 	for (int i = 0; i < N; ++i)
// 	{
// 		printVec(v[i]);
// 	}
// 	cout<<v[0][1];
// 	// cout<<v[0][0];
// }
//array of vector is like of the 2d vector


//vector of vector

// int main(){
// 	int N;
// 	cin>>N;
// 	vector<vector<int>>v;
// 	for (int i = 0; i < N; ++i)
// 	{
// 		int n;
// 		cin>>n;
// 		vector<int >temp;
// 		for (int j = 0; j < n; ++j)
// 		{
// 			int x;
// 			cin>>x;
// 			temp.push_back(x);
// 		}
// 		v.push_back(temp);

// 	}
// 	v[0].push_back(10);
// 	v.push_back(vector<int>());
// 	for (int i = 0; i < v.size(); ++i)
// 	{
// 		printVec(v[i]);
// 	}
// 	cout<<v[0][1];
// 	// cout<<v[0][0];
// }
//in vector of vector we can change the value of row and column at the same time
/// below second way of doing vector of vector
// int main(){
// 	int N;
// 	cin>>N;
// 	vector<vector<int>>v;
// 	for (int i = 0; i < N; ++i)
// 	{
// 		int n;
// 		cin>>n;
// 	v.push_back(vector<int>());
// 		for (int j = 0; j < n; ++j)
// 		{
// 			int x;
// 			cin>>x;
// 			v[i].push_back(x);
// 		}
		

// 	}
// 	v[0].push_back(10);
	
// 	for (int i = 0; i < v.size(); ++i)
// 	{
// 		printVec(v[i]);
// 	}
// 	cout<<v[0][1];
// 	// cout<<v[0][0];
// }
//date : 15 october 2022
//Iterators

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
	// vector<int>v={2,3,4,5,6,7};
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	cout<<v[i]<<" ";
	// }
	// cout<<endl;
	// // vector<int >::iterator it =v.begin();
	// // cout<<(*(it))<<endl;
	// // 	// vector<int >::iterator it =v.begin();
	// // cout<<(*(it+1))<<endl;
	// // for(it=v.begin();it!=v.end();++it){
	// // 	cout<<(*it)<<" ";
	// // }
	// for(auto it = v.begin();it!=v.end();++it)
	// {
	// 	cout<<(*it)<<" ";
	// }
	// cout<<endl;
	// // for pair
	// vector<pair<int,int>>v_p={{1,2},{4,5}};
	// // for(pair<int,int>&value:v_p){
	// // 	cout<<value.first<<" "<<value.second<<endl;
	// // }
	// for(auto &value:v_p){
	// 	cout<<value.first<<" "<<value.second<<endl;
	// }


	// for(int value : v){
	// 	value++;
	// 	cout<<value<<" ";
	// }
	// for(int value : v){
	// 	// value++;
	// 	cout<<value<<" ";
	// }
// 	vector<pair<int, int >>v_p={{1,2},{3,8}};
// 	for(auto &value : v_p){
// 		cout<<value.first<<" "<<value.second<<endl;
// 	}

// 	auto a=1.0;
// 	cout<<a<<endl;

// 	cout<<endl;

// }

// maps , ordered map and multimaps

// #include<bits/stdc++.h>
// using namespace std;

// void print(map<int,string >&m){
// 	cout<<m.size()<<endl;
// 	for(auto &pr:m){

// 		cout<<pr.first<<" "<<pr.second<<endl;
// 	}
// }




// int main()
// {
// 	// std::map<int, string> m;
// 	std::map<string, string> m;
// 	m["abc"]="abded";//s.size()*log(n)
// 	auto it=m.find(7);
	// m[1]="abc";
	// m[5]="cdc";
	// m[3]="acd";
	// m[6]="a";
	// m[5]="cde";
	// auto it =m.find(3); //O(log(n))
	// auto it =m.find(7); //O(log(n))

	// if(it!=m.end())
	// 	m.erase(it);
	// m.erase(3);
	// m.clear();
	// print(m);

	// if(it== m.end()){
	// 	cout<<"NO value";

	// }
	// else
	// {
	// 	cout<<(*it).first<<" "<<(*it).second;
	// }
	// m.insert({4,"afg"});
	// m[6];
	// print(m);
	// map<int, string>:: iterator it;
	// for(it =m.begin();it!=m.end();++it){
	// 	cout<<(*it).first<<" "<<(*it).second<<endl;
	// }
	// for(auto &pr: m){
	// 	cout<< pr.first<< " "<<pr.second<< endl;
	// }

// }
// #include<bits/stdc++.h>
// using namespace std;

// int main ()
// {
// 	map<string, int> m;
// 	int n;
// 	cin>>n;
// 	for(int i =0; i<n;i++){
// 		string s;
// 		cin>>s;
// 		//m[s]=m[s]+1;
// 		m[s]++;
// 	}
// 	for(auto pr: m){
// 		cout<< pr.first<<" "<<pr.second<<endl;
// 	}
// }


//unordered_map

// #include<bits/stdc++.h>
// using namespace std;

// void print(unordered_map<int,string >&m){
// 	cout<<m.size()<<endl;
// 	for(auto &pr:m){

// 		cout<<pr.first<<" "<<pr.second<<endl;
// 	}
// }
// int main(){
// unordered_map<int,string>m;
// 	m[1]="abc";//O(1)
// 	m[5]="cdc";
// 	m[3]="acd";
// 	m[6]="a";
// 	m[5]="cde";

// auto it =m.find(7); //O(1)

// 	if(it!=m.end())
// 		m.erase(it);//O(1)
// 	print(m);
// }
//the unordered_map are internally implemented by the use of hash table
// for map we can use any
// data type for the key value but for the unodered
// map the complex datatype are not dafind//
// as it is not impleneted interally for the undered map but we can use complex date type in map as it works on the basis of comparison



//Qn
 #include<bits/stdc++.h>
using namespace std;

int main ()
{
	unordered_map<string, int> m;
	int n;
	cin>>n;
	for(int i =0; i<n;i++){
		string s;
		cin>>s;
		m[s]++;
	}
	int q;
	cin>>q;
	while (q--){
		string s;
		cin>>s;
		cout<<m[s]<<endl;
	}
	
}
