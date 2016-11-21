#include <bits/stdc++.h>
using namespace std;
int tc, cases;
#define ULL unsigned long long
#define input_d(x) scanf("%d", &x);
#define input_lld(x) scanf("%lld", &x);
#define input_c(x) scanf("%c", &x);
#define input_s(x) scanf("%s", &x);
#define loop(start, end) for(int i = start; i<end; i++)
#define clear(x) memset(x, 0, sizeof x)
#define fo freopen("file.in", "r", stdin);
#define fc freopen("file.out", "w", stdout);

int main() {
	long long num, sqr,Hn;
	input_d( tc );
	while( tc-- ){
		input_lld( num );
		sqr = sqrt(num);
		Hn = 0;
		for( int i=1; i<=sqr; i++){
			Hn += (num/i);
		}
		Hn += (Hn-sqr*sqr);
		printf("%lld\n", Hn);
	}
	return 0;
}

/*
the loop for the case 9 -> 9, 4, 3
means, there are 9 1s, 4 2s and 3 3s in H(9)


1 1 1
1 1 1
1 1 1
1 1
1
1
1
1
1

*/

