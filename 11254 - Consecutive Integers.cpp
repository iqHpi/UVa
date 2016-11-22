#include <bits/stdc++.h>
using namespace std;

int main(void){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	int a, sum, _sum, n;
	while( scanf("%d", &sum) ){
		if( sum == -1 ) break;
		for(n = sqrt(2*sum); n>0; n--){
			a = (sum/n) - (n-1)/2;
			_sum = n*a + (n%2==1 ? n*((n-1)/2) : (n/2)*(n-1));
			if( sum == _sum ) break;
		}
		printf("%d = %d + ... + %d\n", sum, a, --n+a);
	} 
    return 0;
}
