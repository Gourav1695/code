reccursion for the factorial 
int fact (int n){
	if(n==0) return 1;
//for the 2nd case	// for (int i = 0; i < count; ++i)

	return fact(n-1)*n;
}
int main(){
	int n;
	cin>>n;
	cout<<fact(n);
}

1. Number of fuction calls --> n
2. What is complexity of each fuction --> O(1)
n*O(1)=O(n)
for the second case O(n^2)


int sum(int n, int a[]){
	if(n<0) return 0;
	return sum(n-1,a)+a[n];

}
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	// cout<<sum(n-1,a);
	cout<<sum(3,a);
}
time compelexity = O(n)

digit sum 
digit_sum(n)-> digit_sum(n/10)+last_digit
1234 ->4 + digitsum(123)

int digit_sum(int n){
	if(n==0) return 0;
	return digit_sum(n/10)+(n % 10);
}
int main(){
	int n;
	cin>>n;
	cout<<digit_sum(n);
}
1. Number of function calls -> number of digits in n
2.what is complexity of each fuction ->O(1)
time complexity -> O(logn)
