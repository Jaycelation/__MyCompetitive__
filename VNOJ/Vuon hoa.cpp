#include <bits/stdc++.h>
#include <fstream>
typedef long long ll;
using namespace std;
const ll mod=1e9+7;
int mu(ll a,ll b){
	if(b==1) return a%mod;
	ll tmp=mu(a,b/2)%mod;
	if(b%2==0) return (tmp*tmp)%mod;
	return ((tmp*a)%mod*tmp)%mod;
}
int main(){
	int n;
	cin>>n;
	ll maxh=0,maxc=0;
	char a[n+5][n+5];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cin>>a[i][j];
	}for(int i=0;i<n;i++){
		ll sum=0;
		for(int j=0;j<n;j++){
			if(a[i][j]=='#'){
				ll tmp=0;
				while(a[i][j]=='#'&&j<n){
					tmp++;j++;
				}tmp=mu(tmp,tmp);
				sum=(sum+tmp)%mod;
			}
		}//cout<<sum<<" ";
		maxh=max(maxh,sum);
	}cout<<maxh<<" ";
	for(int j=0;j<n;j++){
		ll sum=0;
		for(int i=0;i<n;i++){
			if(a[i][j]=='#'){
				ll tmp=0;
				while(a[i][j]=='#'&&i<n){
					tmp++;i++;
				}tmp=mu(tmp,tmp);
				sum=(sum+tmp)%mod;
			}
		}//cout<<sum<<" ";
		maxc=max(maxc,sum);
	}cout<<maxc;
}
