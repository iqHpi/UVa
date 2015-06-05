/* Rank - 173
   Runtime - 0.000 */
#include <stdio.h>
int main() {
	long long T, num, pal, count, n, rev, r;
	scanf("%lld", &T);
	while( T-- ) {
		scanf("%lld", &num);
		pal = 1;
		count = -1;
		while( pal != 0 ) {
			n = num;
			rev = 0;
			while( n!=0 ) {
				r = n%10;
				n = n/10;
				rev *= 10;
				rev += r;
			}
			pal = num - rev;
			num += rev;
			count++;
		}
		printf("%lld %lld\n", count, rev);
	}
	return 0;
}
