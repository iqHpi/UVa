#include <bits/stdc++.h>
using namespace std;

struct myDataType{
	char name[12];
	int dimensions;
	int base;
	int low[12];
	int high[12];
	int block_size;
	
} arr[1024];

int position( char str[100] ){
	for(int i = 0; i<1024; i++){
		if( !(strcmp(str,arr[i].name)) ) return i;
	}
	return 0;
}

int main(){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	int N, R, index, dim[12], C[12], ans;
	char naam[100];
	cin >> N >> R;
	
	for(int i = 0; i < N; i++){
		scanf("%s", arr[i].name);
		scanf("%d %d %d",&arr[i].base, 
		&arr[i].block_size, &arr[i].dimensions );
		
		for(int ii = 0; ii<arr[i].dimensions; ii++){
			scanf("%d %d",&arr[i].low[ii], &arr[i].high[ii] );
		}
	}
	
	for(int ii = 0; ii < R; ii++){
		//query
		scanf("%s", naam);
		index = position(naam);
		for(int i = 0; i<arr[index].dimensions; i++) scanf("%d", &dim[i]);
		
		//calculations
		ans = arr[index].base;
		C[ arr[index].dimensions-1 ] = arr[index].block_size;
		
		for(int i = arr[index].dimensions-2; i>=0; i--) 
		C[i] = C[i+1] * (arr[index].high[i+1] - arr[index].low[i+1] + 1);
		
		for(int i = 0; i<arr[index].dimensions; i++) 
		ans += C[i] * (dim[i] - arr[index].low[i]);
		
		//output
		printf("%s[", arr[index].name);
		for(int i = 0; i<arr[index].dimensions; i++){
			if(i) printf(", ");
			printf("%d", dim[i]);
		}
		printf("] = %d\n", ans);
	}
    return 0;
}
