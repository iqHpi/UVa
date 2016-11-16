#include <bits/stdc++.h>
using namespace std;

int main(){
	char num[30];
	int ans, base_two;
	while( scanf("%s", num) && strcmp(num,"0") ){
		ans = 0;
		base_two = 2;
		for(int i = strlen(num)-1; i>=0; i--){
			ans += (num[i]-48)*(base_two-1);
			base_two = base_two << 1;
		}
		printf("%d\n", ans);
	}
	return 0;
}
