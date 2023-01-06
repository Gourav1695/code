#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout<<[](int x){return x+2;}(4)<<endl;
	cout<<[](int x,int y){return x+y;}(4,7)<<endl;

	auto sum= [](int x,int y){return x+y;};
	cout<<sum(2,3);
}