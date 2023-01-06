#include <bits/stdc++.h>
using namespace std;

bool is_positive(int x){
	return x>0;
}



int main(){
	vector<int>v={-2,-4,-6};
	cout<<all_of(v.begin(), v.end(),
		[](int x){return x>0;})<<endl;

	// cout<<all_of(v.begin(),v.end(),is_positive);
// all_of return true if all the elements follows the condition if any condition fails then it return false
// any_of return false only if all the elements doesn't follow the condition
	cout<<any_of(v.begin(),v.end(),
		[](int x){return x>0;})<<endl;

//  none_of return true only if all not matched the condition 
	cout<<none_of(v.begin(),v.end(),
		[](int x){return x>0;})<<endl;

	cout<<all_of(v.begin(), v.end(),
		[](int x){return x%2==0;})<<endl;// return ture only if all elements are even
	

}
