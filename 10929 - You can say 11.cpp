#include <bits/stdc++.h>
using namespace std;
	
int main(void){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	char num[1024];
	int sum, var, len;
	while( scanf("%s", num) ){
		
		len = sum = 0;
		for(int i = 0; num[i] && num[i]>='0' && num[i] <='9'; i++){
			var = num[i]-'0';
			len++;
			sum += (i%2==0? var:var*(-1));
		}
		if(len==1 && num[0]=='0') break;
		sum = sum < 0 ? (-1)*sum : sum;
		if(sum%11==0)	
			printf("%s is a multiple of 11.\n", num);
		else
			printf("%s is not a multiple of 11.\n", num);
	} 
    return 0;
}
