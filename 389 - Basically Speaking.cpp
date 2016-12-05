#include <bits/stdc++.h>
using namespace std;

int weight( char num[10], int base ){
	int len = strlen(num) - 1, digit, pBase = 1, val = 0;

	for(int i = len; i>=0; i--){
		digit = num[i]>='0' && num[i]<='9' ? num[i] - '0' : num[i] - 'A'+10;
		val += digit*pBase;
		pBase *= base;
	}
	return val;
}

int main(){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	char num1[10], ans[7];
	int digit, iBase,oBase, value, pos;
	bool flag;
	while( scanf("%s %d %d", num1, &iBase, &oBase) != EOF ){
		flag = false;
		for(int i =0; i<6; i++) ans[i] = ' ';
		ans[6]='0';
		value = weight(num1,iBase);
		pos = 6;
		while( value != 0) {
			if(pos<0){
				flag = true;
				break;
			}
			
			digit = (value%oBase);
			ans[pos--] = digit>9 ? 'A'+digit-10 : '0'+digit;
			value /= oBase;
			
		}
		
		if(flag) printf("  ERROR\n");
		else printf("%s\n", ans);
	}
	return 0;
}
