#include <bits/stdc++.h>
using namespace std;

struct myDataType{
	int numerator;
	int denominator;
	double value;
} Fn[1000000];
	
bool wayToSort(myDataType x, myDataType y){
	if(x.value<y.value) return true;
	return false;
}
	
int main(void){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	int pos, n, k;
	while( scanf("%d %d", &n, &k) != EOF ){
		
		pos = 0;
		Fn[pos].numerator = 1;
		Fn[pos].denominator = 1;
		Fn[pos].value = 1.0;
		
		for(int i = 1; i <= n; i++)
			for(int ii = 1; ii<i; ii++)
				if( __gcd(i,ii) == 1 ){
					Fn[++pos].numerator = ii;
					Fn[pos].denominator = i;
					Fn[pos].value = (double)ii/(double)i;
				}
				
		sort(Fn, Fn+pos+1, wayToSort);
		printf("%d/%d\n", Fn[k-1].numerator, Fn[k-1].denominator);
	} 
    return 0;
}
