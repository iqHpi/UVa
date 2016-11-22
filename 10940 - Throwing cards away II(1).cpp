#include <bits/stdc++.h>
using namespace std;

int main(void){
	int pow, num, ans;
	while( scanf("%d", &num), num){
		pow = log2(num);
		ans = (num - (1<<pow))*2;
		printf("%d\n", ans?ans:num);
	} 
    return 0;
}
