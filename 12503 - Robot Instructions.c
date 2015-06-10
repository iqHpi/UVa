#include <stdio.h>
int main(){
	int T,pos,N,n[100],i,I;
	char ch[10];
	scanf("%d", &T);
	while( T-- ){
		scanf("%d", &N);
		pos = 0;
		for(i=1; i<=N; i++){
			scanf("%s", ch);
			if( ch[0]=='L' ){
				pos--;
				n[i] = -1;
			}
			else if( ch[0]=='R' ){
				pos++;
				n[i] = 1;
			}
			else{
				scanf("%s%d", ch, &I);
				pos += n[I];
				n[i] = n[I];
			}
		}
		printf("%d\n", pos);
	}
	return 0;
}
