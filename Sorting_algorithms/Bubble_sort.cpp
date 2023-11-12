#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
	for(int i =0 ; i<n;i++)
	{
		for(int j=0; j<n-i-1;j++)
		{ if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
}

int main()
{
	int a[]= {2,1, 4,3};
	bubbleSort(a,4);
	for(auto &it: a)
	{
		cout<<it<<" ";
	}
	cout<<endl;
}
