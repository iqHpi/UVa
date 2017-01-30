#include <bits/stdc++.h>
using namespace std;

long long table[110][110];

long long nCr(long long n, long long r){
	if(r==1) return n;
	if(r==n) return 1;
	if( table[n][r] != -1 ) return table[n][r];
	table[n][r] = nCr(n-1, r) + nCr(n-1,r-1);
	return table[n][r];
}
	
int main(){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	long long m, n;
	
	memset(table, -1, sizeof table);
	while( scanf("%lld %lld", &n, &m), n|m){
		printf("%lld things taken %lld at a time is %lld exactly.\n", n,m,nCr(n,m));
	}
	return 0;
}

