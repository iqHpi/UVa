#include <bits/stdc++.h>
using namespace std;

int main(){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	int a[21], b[21], c[21], n, m, ans, posA, posB, dis;
	bool flag;
	while( scanf("%d %d", &n, &m) , n|m ){
		//compute n!
		ans = 1;
		for(int i = 1; i<=n; i++) ans *= i;
		
		//input all constraints
		for(int i = 0; i<m; i++) scanf("%d %d %d", &a[i], &b[i], &c[i]);
		
		//first permutation
		int per[8]={0,1,2,3,4,5,6,7};
		do{
			flag = false;
			for(int i = 0; i<m; i++){ //check all constraints
				
				//find position of a and b in the permutated array
				for(int ii = 0; ii<n; ii++){
					if( per[ii]== a[i] ) posA = ii;
					if( per[ii]== b[i] ) posB = ii;
				}
				
				dis = posB>posA ? posB-posA : posA-posB;
				
				if( (c[i]>0 && dis>c[i]) || (c[i]<0 && dis < -c[i]) ){
					flag = true;
					break;
				}
			}
			if(flag) ans--;
			if(ans==0) break;
		} while( next_permutation(per, per+n) );
		
		printf("%d\n", ans);
	}
    return 0;
}
