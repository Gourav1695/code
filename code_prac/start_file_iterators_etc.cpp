#include <bits/stdc++.h>
using namespace std;
ctrl+shift+b --> to compile and run the code ctrl+ shift+3 -- > to split the
window in 3 parts
const int n=1e7;//this we can define as  in globaly we can do upto 1e7 order
	void printHello(){
		cout<<"Hello";
	}
	int sum( int a, int b)
	{
		int result  = a+b;
		return result;
	}
	int digit_sum(int n){
		int digit_sum=0;
		while(n){
		digit_sum=digit_sum+n%10;
		n=n/10;
	}
	return digit_sum;
	}

	int increment(int n){
		n++;
		return n;
	}
	void increment(int n){
		n++;
	}
void increment(int &n){//pass by reference
		n++;
	}
void increment(int &n,int n1){
	n++;
	n1++;
}
void swap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void func(string &s){
	s="";
}
NOTE: arrays always pass by reference
void func(int a[])
{
a[0]=5;
}	
void func(int a[][20])
{
a[0][0]=5;
}	
const int N=1e3+10;
int a[N][N];
void func(){
	a[0][0]=5;
}
void increment ( int *x){
	//(*x)++;
	*x=*x+1;
}

int main()
{
	int a=4;
	cout<< a<< endl;
	increment(&a);
	cout<< a<< endl;
	a[0][0]=7;
	cout<<a[0][0]<<endl;
	func();
	cout<< a[0][0]<<endl;
	int a[10];
	a[0]=7;
	cout<< a[0]<<endl;
	func(a);
	cout<< a[0]<<endl;

	int a[10][20];
	a[0][0]=7;
	cout<< a[0][0]<<endl;
	func(a);
	cout<< a[0][0]<<endl;
	string s=  "sdfffg";
	cout<<s<<endl;
	func(s);
	cout<<s<<endl;
	int a=3;
	int b=5;
	cout<< a<< " "<< b<<endl;
	increment(a,b);
	
	cout<< a<<" "<<b<<endl;
	int a=3;
	int b=5;
	cout<< a<< " "<< b<<endl;
	swap(a,b);
	cout<< a<<" "<<b<<endl;
	int a=3;

	cout<<a<<endl;
	a=increment(a);
	cout<<a<<endl;
		int a=3;
	cout<<a<<endl;
	increment(a);//it is pass by value so the copy will be transfered not the real value changed

	cout<<a<<endl;
	cout<<sum(90,8);
	int a,b;
	cin>>a>>b;
	cout<<digit_sum(a)+digit_sum(b);
	// int b=0;
	string a;
	cin>>a ;
	cout<< "hello "<<" "<<a<<endl<<"how are you bro";
	int a =5;
	a= a+1;
	cout<< a<< endl;
	cout<< a++<< endl;//1st use than increament
	cout<< a<< endl;//here use the increamented value
	cout<< ++a<< endl;//1st increment than use
	char c= 'a';
	// cout<< ( int )c;
	char b='c';
	cout<< c-b;
	int a;
	double b;
	char c;
	cin>> a>> b>>c;
	// cout<< a<< " "<<b<<" "<<c<< " " << (int )c;
	cout<< a<< "\n";
	for character we use only single cote('')
	for string we double cots(" ")
	int a,b, c;
	char d;
	cin>>d>>a;
	cout<< d<< " "<<a;
	Double 
	Float 
	Long Long Int
	Long Int 
	Int 
	Characters
	these are the precidence order

	cout<< 'c'+1<<endl;
	cout<< 7/2*3;//order left to right
	cout<< 3*7/2;//order left to right
	-10^9<int<10^9
 	-10^12< long int<10^12
 	-10^18< long long int<10^18
	int a= 100000;
	int b= 100000;
	int c= a*b;
	cout<<c<< endl;
	int mx= INT_MAX;
	cout<< INT_MAX+1<<endl;//overflow
	INT_MIN < int< INT_MAX
	long long int a= 100000;
	long long int b= 100000;
	long long int c= a*b;
	cout<< c<< endl;
	 int a= 100000;
	 int b= 100000;
	long long int c= a*b;
	cout<< c<< endl;
	
	double a= 100000;
	double b= 100000;
	 // double c= a*b;
	double c= 1e24;
	 cout<< fixed<<setprecision(0)<<c<< endl;
	long long l, b;
	int l,b;
	cin>>l>>b;
	cout<< l*1LL *b<< endl;
