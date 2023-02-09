#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i=10;i>=0;--i){
		cout<<((num>>i)&1);    
	}

cout<<endl;
}
int main(){
	printBinary(9);
	int a =9;
	int i=1;
	if((a&(1<<i))!=0){
		cout<<"set bit"<<endl;
	}
	else {
		cout<<"Not set bit"<<endl;
	}
	printBinary(a|(1<<1));// for setting the 1st bit
	// printBinary(a|(1<<i));
	// for unsetting any bit
	printBinary(a&(~(1<<3)));
	printBinary(a&(~(1<<i)));

	// toggle
	printBinary(a^(1<<2));
	printBinary(a^(1<<3));

	int ct=0;
	for(int i=31; i>=0; --i){
		if((a&(1<<i))!=0)
			ct++;
	}
	cout<<ct<<endl;
	cout<<__builtin_popcount(a)<<endl;
	cout<<__builtin_popcountll(1LL<<35)<<endl;


}