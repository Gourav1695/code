#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int o_ct=0;
        int e_ct=0;
        int e_sum=0;
        int o_sum=0;
        for(int i=0; i<n;i++){
            cin>>arr[i];
        }
        for(int i=0; i<n;i++){
            if(arr[i]%2==0){
                e_ct++;
                e_sum+=arr[i];
            }
            else{
                o_ct++;
                o_sum+=arr[i];
            }
        }
        // cout<<e_ct<<" "<<o_ct<<endl;
        if(e_sum>o_sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}