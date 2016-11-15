#include <bits/stdc++.h>
using namespace std;

struct myDataType{
	int count;
	char str[55];
} DNA[105], temp;

bool wayToSort( myDataType x, myDataType y ){
	if(x.count < y.count) return true;
	return false;
}

int main(){
	//freopen("file.in", "r", stdin);
    //freopen("file.out", "w", stdout);
	int tc, m, n;
	bool flag = true;
	scanf("%d", &tc);
	while( tc-- ){
		flag ? flag = false : printf("\n");
		scanf("%d %d", &n, &m );
		for(int i = 0; i<m; i++){
			DNA[i].count = 0;
			scanf("%s", DNA[i].str);
			for(int j = 0; j<n; j++){
				for(int k = j+1; k<n; k++){
					if( DNA[i].str[j] > DNA[i].str[k] ) DNA[i].count++;
				}
			}
		}
        //std::sort() doesn't work here as it requires original order to be maintained if no changes occur
		stable_sort(DNA, DNA+m, wayToSort);
		for(int i = 0; i<m; i++){
			printf("%s\n",DNA[i].str);
		}
	}
	return 0;
}

