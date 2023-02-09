#include <bits/stdc++.h>
using namespace std;
const long long N=1e5+10;
long long n,cows;
// vector<long long>position(n);
long long position[N];

bool isSufficientDistance(int minDist){
    int last_pos=-1;
    int cow_cnt=cows;
    for(int i=0; i<n;++i){
        if(position[i]-last_pos>=minDist||last_pos==-1){
            cow_cnt--;
            last_pos=position[i];
        }
        if(cow_cnt==0)
            break;
       
    }
     if(cow_cnt==0)return true;
     else return false;

}
// Done on 27 jan 23
int main(){
    int t;
    cin>>t;
while(t--){
    cin>>n>>cows;
    for(int i=0; i<n;++i){
        cin>>position[i];
    }
    sort(position, position+n);
    long long lo=0, hi=1e9,mid;
    // TTTTTTTTTTFFFFFFF
    while(hi-lo>1){
        mid=(lo+hi)/2;
        if(isSufficientDistance(mid)){
            lo = mid;
        }
        else{
            hi=mid-1;
        }
    }
    if(isSufficientDistance(hi)){
        cout<<hi<<endl;
    }
    else{
        cout<<lo<<endl;
    }
}

    return 0;
}