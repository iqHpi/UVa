#include <bits/stdc++.h>
using namespace std;

bool sieve[1000000];


int main(){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	int prime[100], pos = 0, n, ans;
	
	memset(sieve, true, sizeof sieve);
	
	//prime sieve
	for( int i = 2; i<1001; i++){
		if( sieve[i] ){
			for( int j = i+i; j<1000000; j+=i ) sieve[j] = false;
		}
	}
	
	//list of primes
	for( int i = 2; i<550; i++){
		if( sieve[i] ) prime[pos++] = i;
	}
	
	//main program
	while( scanf("%d", &n) ){
		if(n==0) break;
		for(int i = 0; i<99; i++ ){
			ans = n - prime[i];
			if( sieve[ ans ] ){
				printf("%d = %d + %d\n", n, prime[i], ans);
				break;
			}
			
		}	
	}
	return 0;
}
