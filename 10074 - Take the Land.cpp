#include <bits/stdc++.h>
using namespace std;

#define LL long long

int main(){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	int count = 0;
	int row, col, matrix[110][110], subRect, maxArea, area;
	while( scanf("%d %d", &row, &col), row | col ){
		count++;
		
		for(int i=0; i<row; i++) {
			for(int j=0; j<col; j++) {
				scanf("%d", &matrix[i][j]);
				//comulative sum
				if(i>0) matrix[i][j] += matrix[i-1][j];
				if(j>0) matrix[i][j] += matrix[i][j-1];
				if(i>0 && j>0) matrix[i][j] -= matrix[i-1][j-1];
			}
		}
		maxArea = area = 0;
		for(int i=0; i<row; i++) for(int j=0; j<col; j++)
		for(int k=i; k<row; k++) for(int l=j; l<col; l++){
			subRect = matrix[k][l];
			if(i>0) subRect -= matrix[i-1][l];
			if(j>0) subRect -= matrix[k][j-1];
			if(i>0 && j>0) subRect += matrix[i-1][j-1];

			if( subRect == 0 ){
				area = (k-i+1)*(l-j+1);
				
			}
			maxArea = max(area, maxArea);
		}
		
		printf("%d\n", maxArea);
	}	
	return 0;
}


