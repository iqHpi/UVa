/* Rank - 177
   Runtime - 0.001 */
#include <stdio.h>
long long rev(long long n) {
	long long new=0, r;
	while( n!=0 ) {
		r = n%10;
		n = n/10;
		new *= 10;
		new += r;
	}
	return new;
}

int main() {
	long long T, num, temp, pal, count;
	scanf("%lld", &T);
	while( T-- ) {
		scanf("%lld", &num);
		pal = 1;
		count = -1;
		while( pal != 0 ) {
			temp = rev(num);
			pal = num - temp;
			num += temp;
			count++;
		}
		printf("%lld %lld\n", count, temp);
	}
	return 0;
}
