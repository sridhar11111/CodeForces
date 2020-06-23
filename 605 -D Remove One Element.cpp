#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/hash_policy.hpp>
//__gnu_pbds::gp_hash_table<int,int>mp
//#include<boost/multiprecision/cpp_int.hpp>
//using boost :: multiprecision::cpp_int;
using namespace std;
#define int long long int
#define ee '\n'
#define inf 1000000007 fast max
#define mod 1000000007
#define db(x) cout<<#x<<' '<<x<<endl;
#define float double
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define fr first
#define sc second
#define prmap(p) for(auto k:p) cout<<k.fr<<' '<<k.sc<<endl;
#define prset(x) for(auto it=x.begin();it!=x.end();it++) cout<< *it<<' ';cout<<endl;
#define all(x) x.begin(),x.end()
#define print(v) for(auto i:v) cout<<i<<' ';cout<<endl;
int min (int x,int y) {if(x<y) return x;return y;}
int max(int x,int y) {if(x>y) return x;return y;}
int maxx(int x,int y,int z){ return max(x,max(y,z));}
int isset(int n, int k) {  if ((n >> (k)) & 1) return 1;return 0;} 
 template<typename T>

bool cmp(const pair<int ,int> &a,const pair<int,int>&b)
{if(a.fr!=b.fr) return a.fr<b.fr; else return a.sc<b.sc;}
 inline bool is_palindrome(const string &s) { return std::equal(s.begin(), s.end(), s.rbegin());}

//const int ll=11;
//bitset<ll>a;
// vector<bool>prime(2e5,false);
// void sieve(int n){
// for(int i=2;i*i<=n;i++)
// {
// if(prime[i]){
//     for(int j=i*i;j<=n;j+=i) prime[j]=false;
// }
// }

// }
 
//int maxx(int a,int b) {if(a>b) return a;return b;}
/*int nCr(int n, int r) 
{   int p = 1, k = 1; 
    if (n - r < r)     r = n - r; 
  if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; long long m = __gcd(p, k); p /= m;k /= m; n--; r--; 
        } 
    } else p = 1; 
  
    return p; 
} */
/*int cp(int a, int b, int m) {  a %= m;int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}*/
/*void update(int ind,int val,int vl,int st,int en)
{
if(st==en ) { a[vl]=val,b[vl]=val;}
else {
    int md=(st+en)/2;
    if(ind>md){ update(ind,val,2*vl+1,md+1,en );}
    else  {update(ind,val,2*vl,st,md ); }
        a[vl]=max(max(a[2*vl],a[2*vl+1]),b[]-b[]) ;
}
 
 
 
}*/

signed main(){
    

while(test--)
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v) cin>>i;
    if(n==1) {cout<<1<<ee;continue;}
    if(n==2)
    {
        if(v[0] < v[1]) cout<<2;
        else cout<<1;
        continue;
    }
    int l[n],r[n];
    l[0] =1;
    r[n-1]=1;
    int mx2 =1;
      for(int i=1;i<n;i++) {
          if(v[i] > v[i-1]) l[i] = l[i-1]+1;
      else {  l[i]=1;}
          mx2 = max(mx2,l[i]);
      }

  for(int i=n-2;i>=0;i--){
        if(v[i] < v[i+1]) r[i] = r[i+1]+1;
    else r[i] =1;
        
    }

    int mx =1,mx1=1;
    for(int i=1;i <n-1;i++)
    {
      if(v[i+1]>v[i-1])  mx = max(mx , r[i+1]+l[i-1]);
    
    }
    
    cout<<max(mx,mx2);
}
  return 0;
} 
