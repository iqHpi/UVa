#include <bits/stdc++.h>
using namespace std;
int main(){
	int B[4], G[4], C[4], moves, min, sqnc;
	char str[6][4] = {{"BCG"}, {"BGC"}, {"CBG"}, {"CGB"}, {"GBC"}, {"GCB"}};

	while( scanf("%d %d %d %d %d %d %d %d %d", &B[1], &G[1], &C[1], &B[2], &G[2], &C[2], &B[3], &G[3], &C[3] ) != EOF){
		
		min = INT_MAX;

		moves = B[2] + B[3] + C[1] + C[3] + G[1] + G[2];
		if( moves < min ){ min = moves; sqnc = 0; }

		moves = B[2] + B[3] + C[1] + C[2] + G[1] + G[3];
		if( moves < min ){ min = moves; sqnc = 1; } 

		moves = B[1] + B[3] + C[2] + C[3] + G[1] + G[2];
		if( moves < min ){ min = moves; sqnc = 2; } 

		moves = B[1] + B[2] + C[2] + C[3] + G[1] + G[3];
		if( moves < min ){ min = moves; sqnc = 3; } 

		moves = B[1] + B[3] + C[1] + C[2] + G[2] + G[3];
		if( moves < min ){ min = moves; sqnc = 4; } 

		moves = B[1] + B[2] + C[1] + C[3] + G[2] + G[3];
		if( moves < min ){ min = moves; sqnc = 5; } 
		
		printf("%s %d\n", str[sqnc], min);
	}
	return 0;
}

//1 2 3 4 5 6 7 8 9
//5 10 5 20 10 5 10 20 10
