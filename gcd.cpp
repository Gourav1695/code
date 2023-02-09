#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}
int main(){
	cout<<gcd(12,4)<<endl;
	cout<<gcd(18,12)<<endl;
	cout<<gcd(12,18)<<endl;
	cout<<12*18/gcd(12,18)<<endl;
	cout<<__gcd(12,18)<<endl;

}