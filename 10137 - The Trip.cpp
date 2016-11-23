#include <bits/stdc++.h>
using namespace std;

int main(void){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	double cost[1010], given, taken, avg;
	int student;
	
	while( scanf("%d", &student) , student ){
		avg = given = taken = 0;
		for(int i = 0; i<student; i++){
			scanf("%lf", &cost[i]);
			avg += cost[i];
		}
		avg = avg / student;
		for(int i = 0; i<student; i++){
			//for precision error
			if( cost[i] > avg ) given += (double) (int)( ( cost[i] - avg )*100.00)/100.00;
			else taken += (double)(int)( ( avg - cost[i] )*100.00) /100.00;
		}
		printf("$%0.2lf\n", given>taken?given:taken);
	}
    return 0;
}
