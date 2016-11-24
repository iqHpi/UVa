#include <bits/stdc++.h>
using namespace std;
	
int main(void){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	int num, parity, lsb[40], pos;
	while( scanf("%d", &num), num ){
		pos = parity = 0 ;
		printf("The parity of ");
		while( num != 0 ){
			lsb[++pos] = 1 & num;
			parity += lsb[pos];
			num >>= 1;
		}
		for(int i = pos; i>0; i--) printf("%d", lsb[i]);
		printf(" is %d (mod 2).\n", parity);
	} 
    return 0;
}
