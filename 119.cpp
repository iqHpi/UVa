#include <bits/stdc++.h>
using namespace std;

int main(){
	//freopen("file.in", "r", stdin);
    //freopen("file.out", "w", stdout);
	struct group{
		int debit;
		int credit;
		char name[20];
	} person[15];
	int total, taka, people, flag;
	char naam[30];
	flag = 0;
	while( scanf("%d", &total) != EOF ){
		flag==0? flag++ : printf("\n");
		for(int i = 0; i < total; i++){
			person[i].debit = 0;
			person[i].credit = 0;
		}
		
		for(int i = 0; i < total; i++)
			scanf("%s", person[i].name);
			
		for(int i = 0; i < total; i++){
			scanf("%s", naam);
			for(int j = 0; j<total; j++){
				if( strcmp( person[j].name, naam) == 0 ){
					scanf("%d %d", &taka, &people);
					if( people != 0){
						person[j].debit += (taka%people);
						person[j].credit += taka;
					}
					
					
					for(int ii = 0; ii<people; ii++){
						scanf("%s", naam);
						for(int iii = 0; iii < total; iii++){
							if( strcmp( person[iii].name, naam) == 0 ){
								person[iii].debit += (taka/people);
							}
						}
					}
					break;
				}
			}
		}
		
		for(int i = 0; i < total; i++){
			printf("%s %d\n", person[i].name, person[i].debit-person[i].credit);
		}
	}
	return 0;
}
