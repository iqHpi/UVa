#include <bits/stdc++.h>
using namespace std;

long long weight( char num[100], int base ){
	long long len = strlen(num) - 1, digit, pBase = 1, value = 0;
	for(int i = len; i>=0; i--){
		digit = num[i]>='0' && num[i]<='9' ? num[i] - '0' : num[i] - 'A'+10;
		value += digit*pBase;
		pBase *= base;
	}
	return value;
}

int minBase( char num[100] ){
	int digit, max = 0;
	for(int i = 0; num[i]; i++){
		digit = num[i]>='0' && num[i]<='9' ? num[i] - '0' : num[i] - 'A'+10;
		if(digit > max) max = digit;
	}
	return max + 1;
}


int main(){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	char num1[100], ans[999], digits[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int iBase, oBase, pos;
	long long val;
	while( scanf("%d %d %s", &iBase, &oBase, num1) != EOF ){
		if( iBase < minBase(num1) ){
			printf("%s is an illegal base %d number\n", num1, iBase);
			continue;
		}
		 
		val = weight(num1, iBase);
		
		pos = 0;
		if(val==0){
			printf("0 base %d = 0 base %d\n", iBase, oBase);
            continue;
        }
		while( val!=0 ){
			ans[++pos] = digits[ (val%oBase) ];
			val /= oBase;
		}
		
		printf("%s base %d = ", num1, iBase);
		for(int i = pos; i>0; i--) printf("%c", ans[i]);
		printf(" base %d\n", oBase);
	}
    return 0;
}
