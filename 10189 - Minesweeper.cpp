#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, n, cases=1;
	char field[103][103];
	
	while(1) {
		scanf("%d %d", &m, &n);
		if(m==0 && n==0) return 0;
		memset(field, '0', sizeof field);
		
		for( int i=1; i<=m; i++) {
			for( int j=1; j<=n; j++) {
				cin >> field[i][j];
			}
		}
		if(cases>1) printf("\n");
		for( int i=1; i<=m; i++){
			for( int j=1; j<=n; j++){
				if( field[i][j]=='.' ){
					field[i][j] = '0';
					if(field[i][j-1] == '*') field[i][j]++;
					if(field[i][j+1] == '*') field[i][j]++;
					if(field[i-1][j-1] == '*') field[i][j]++;
					if(field[i-1][j] == '*') field[i][j]++;
					if(field[i-1][j+1] == '*') field[i][j]++;
					if(field[i+1][j-1] == '*') field[i][j]++;
					if(field[i+1][j] == '*') field[i][j]++;
					if(field[i+1][j+1] == '*') field[i][j]++;
				}
			}
		}
		
		printf("Field #%d:\n", cases++);
		for(int i=1; i<=m; i++) {
			for( int j=1; j<=n; j++) {
				printf("%c", field[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
