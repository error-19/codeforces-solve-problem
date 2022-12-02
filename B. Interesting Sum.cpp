//Allah//
//Md.shamim sorkar//
//ICT-MBSTU//
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;
const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   mod                             = (int) 1000000007;
const int   max_prime                       = (int) 1e6+3;
const int   BLKs                            = (int) 70000;
const int   BLKspan                         = (int) 700;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main()
{
    Faster;
    int tc;
    cin>>tc;
    while(tc--){
int n;
cin>>n;
vector<int>v1(n);
for(int i=0;i<n;i++){
    cin>>v1[i];
}
sort(v1.begin(),v1.end());
//for(auto u:v1)cout<<u<<" ";
int p=n-1;
ll k=*max_element(v1.begin()+1,v1.begin()+p);
ll l=*min_element(v1.begin()+1,v1.begin()+p);
//cout<<k<<" "<<l<<endl;
cout<<(v1[n-1]-v1[0])+(k-l)<<endl;
}
}










