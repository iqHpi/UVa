#include <cstdio>
#include <cstring>
#include <algorithm>

int main(){
	long long pos, fac[20], now;
	int tc, len, len1, i, ii;
	char str[20];
	
	//memorize the factorials
	fac[0] = 1;
	for(i = 1; i<20; i++) fac[i] = i*fac[i-1];
	
	scanf("%d", &tc);
	while( tc-- ){
		scanf("%s %lld", str, &pos); pos++;
		len = strlen(str);
		std::sort( str, str+len );
		
		//this block is magic
		len1 = len;
		for(i = 0; i<len1; i++){
			
			//find how many rounds are used for a single character 
			now = 0;
			while( pos > fac[len-1] ){
				pos -= fac[len-1];
				now++;
			}
			printf("%c", str[now]);
			
			//left shift one block in the string as one character is usedko 
			for(ii = now; ii<len-1; ii++) str[ii] = str[ii+1];
			len--;
		}
		puts("");
	}
    return 0;
}
