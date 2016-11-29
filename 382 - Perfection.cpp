#include <bits/stdc++.h>
using namespace std;

int table[60002][1];
int main(void){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	//memset(table, 0, sizeof table);
	for(int i = 1; i<=60000; i++){
		table[i][0] -= i;
		for(int j = i; j<=60000; j+=i){
			table[j][0] += i;
		}
	}
	int num;
	printf("PERFECTION OUTPUT\n");
	while( scanf("%d", &num), num ){
		printf("%5d  ", num);
		if( table[num][0] == num ) printf("PERFECT\n");
		else if ( table[num][0] < num ) printf("DEFICIENT\n");
		else printf("ABUNDANT\n");
	}
	printf("END OF OUTPUT\n");
    return 0;
}
