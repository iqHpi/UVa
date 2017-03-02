#include <bits/stdc++.h>

int main(){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	double H, U, D, F, climbed, position, ff;
	int day;
	bool success;
	while( scanf("%lf %lf %lf %lf", &H, &U, &D, &F), H ){
		position = 0;
		day = 0;
		success = true;
		ff = (U*(F/100.0));
		while( position < H ){
			day++;
			if(day!=1) U -= ff;
			climbed = U<0 ? 0:U;
			position += climbed;
			if(position > H) break;
			position -= D;
			if(position<0){
				success = false;
				break;
			}
		}
		
		if(success) printf("success on day %d\n", day);
		else printf("failure on day %d\n", day);
	}
    return 0;
}
