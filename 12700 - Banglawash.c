#include <stdio.h>
int main(){
	int T,p,b,w,t,a,i,cases=1;
	char ch[11];
	scanf("%d", &T);
	while( T-- ){
		b = w = t = a = 0;
		scanf("%d", &p);
		scanf("%s", ch);
		i = p;
		while(i--){
			if( ch[i]=='B') b++;
			else if( ch[i]=='W') w++;
			else if( ch[i]=='T') t++;
			else a++;
		}
		if( a==p )
			printf("Case %d: ABANDONED\n",cases++);
		else if( b+a==p )
			printf("Case %d: BANGLAWASH\n",cases++);
		else if( w+a==p )
			printf("Case %d: WHITEWASH\n",cases++);
		else if( b>w )
			printf("Case %d: BANGLADESH %d - %d\n",cases++,b,w);
		else if( b<w )
			printf("Case %d: WWW %d - %d\n",cases++,w,b);
		else
			printf("Case %d: DRAW %d %d\n",cases++,b,t);
	}
	return 0;
}
