#include <bits/stdc++.h>
using namespace std;

int main(){
	queue<string>q;
	q.push("abc");
	q.push("bdc");
	q.push("asf");
	q.push("sag");
	q.push("fdf");
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
}