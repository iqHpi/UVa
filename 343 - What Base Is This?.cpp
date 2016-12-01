#include <bits/stdc++.h>
using namespace std;

int weight( char num[100], int base ){
	int len = strlen(num) - 1, digit, pBase = 1, value = 0;

	for(int i = len; i>=0; i--){
		digit = num[i]>='0' && num[i]<='9' ? num[i] - '0' : num[i] - 'A'+10;
		value += digit*pBase;
		pBase *= base;
	}
	return value;
}

int minBase( char num[100] ){
	int digit, max = 1;
	for(int i = 0; num[i]; i++){
		digit = num[i]>='0' && num[i]<='9' ? num[i] - '0' : num[i] - 'A'+10;
		if(digit > max) max = digit;
	}
	return max + 1;
}


int main(){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	char num1[100], num2[100];
	int base1[40],base2[40];
	
	while( scanf("%s %s", num1, num2) != EOF ){
		
		bool flag = true;
		memset(base2, 0, sizeof base2);
		
		for(int i = minBase(num1); i<37; i++){
			base1[i] = weight( num1, i);
			if(!flag) break;
			
			for(int j = minBase(num2); j<37; j++){
				if( !base2[j] ) base2[j] = weight( num2, j);
				
				if( base1[i] == base2[j] ){
					printf("%s (base %d) = %s (base %d)\n", num1, i, num2, j);
					flag = false;
					break;
				}
			}
		}
		
		if(flag) printf("%s is not equal to %s in any base 2..36\n", num1, num2);
		
	}
    return 0;
}
