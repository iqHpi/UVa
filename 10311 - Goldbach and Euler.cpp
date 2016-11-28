#include <bits/stdc++.h>
using namespace std;

bool sieve[100000001];
vector <int> prime;


int main(){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	
	memset(sieve, true, sizeof sieve);

	for( int i = 2; i<10001; i++){
		if( sieve[i] ){
			for( int j = i+i; j<100000001; j+=i ) sieve[j] = false;
		}
	}
	sieve[0] = sieve[1] = false;
	
	prime.push_back(2);
	for( int i = 3; i<50050001; i+=2){
		if( sieve[i] ) prime.push_back(i);
	}
	
	int n, ans;
	bool flag;
	while( scanf("%d", &n) != EOF ){
		flag = false;
		if(n%2){
			ans = 2;
			flag = sieve[n-2];
		}
		else{
			int up = int(upper_bound(prime.begin(), prime.end(), n/2 ) -  prime.begin());
			
			for(int i = up;  i>=0; i-- ){
				
				int pos = n-prime[i];
				if( sieve[ pos ] ){
					ans = min( prime[i], pos);
					if( pos == prime[i] ) continue;
					else{
						flag = true;
						break;
					}
				}
			}
		}
		if(flag) printf("%d is the sum of %d and %d.\n", n, ans, n-ans);
		else printf("%d is not the sum of two primes!\n", n);
	}
	return 0;
}
