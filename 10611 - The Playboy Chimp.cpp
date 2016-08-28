#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int N, n[50001], Q,count, temp, q, hi, lo, mid;
	cin >> N >> n[0];
	count = N;
	for(int i=1; i<N; i++){
		HERE:
		count--; if(count==0) break;
		cin >> temp;
		if(temp==n[i-1]){
			N--;
			goto HERE;
		}
		else n[i]=temp;
	}
	cin >> Q;
	for(int i=0; i<Q; i++){
		lo = 0; hi = N-1; mid = 0;
		cin >> q;
		if(q<n[0]) printf("X %d\n", n[0]);
		else if(q==n[0]) printf("X %d\n", n[1]);
		else if(q>n[N-1]) printf("%d X\n",n[N-1] );
		else if(q==n[N-1]) printf("%d X\n",n[N-2] );
		else{
			while(lo<=hi){
				mid = (hi + lo)/2;
				if(q>n[mid]) lo = mid+1;
				else if(q==n[mid]) break;
				else hi = mid-1;
			}
			if(q>n[mid]) printf("%d %d\n", n[mid], n[mid+1]);
			else if(q<n[mid]) printf("%d %d\n", n[mid-1], n[mid]);
			else printf("%d %d\n", n[mid-1], n[mid+1]);
		}
	}
	return 0;
}
