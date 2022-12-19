int i=1;
	while ( i<=10){
		cout<< i<<endl;
		i++;
	}
	for(initialisation;condition;operations){}
	for (int i = 1; i <=10; ++i)
	{
		/* code */cout<< i<<endl;
	}
		for(int i=1; i<=10;cout<< i++<< endl){}
	int n;
	cin>>n;
	for( int i=1; i<=n; ++i){
		for( int j=1; j<=i;++j){
			cout<< "*";

		}
		cout<< endl;
	}
	while(1){//infinite loop

	}
	for(int i=0;true;++i){}//infinite loop
	for( int i=0; i<10;++i){
		if(i==8)
		{
			break;
		}
		cout<<i<<endl;
	}
	for( int i=0; i<10;++i){
		if(i==8)
		{
			continue;
		}
		cout<<i<<endl;
	}
	while (true){
		int x;
		cin>>x;
		if(x==42){
			break;
		}
		cout<< x<< endl;
	}
	int t;
	cin>> t;
	while(t--){
	int n;
	cin>>n;
	int digit_sum=0;
	while ( n>0)
	{
		int last_digit=n%10;
		digit_sum=digit_sum+last_digit;
		n=n/10;

	}
	cout<< digit_sum<<endl;

}
