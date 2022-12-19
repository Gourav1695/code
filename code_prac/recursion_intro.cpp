void func(int n)
{
	if(n== 0) return ;// op will be 1 2 3 4 5

	func(n-1);
	cout<<n<<endl;
}
int main(){
	func(5);
}

void func(int n)
{
	if(n== 0) return ;
    cout<<n<<endl;// op will be 5 4 3 2 1
	func(n-1);
	
}
int main(){
	func(5);
}
