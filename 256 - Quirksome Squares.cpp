#include <bits/stdc++.h>
using namespace std;
int tc, cases;

int main(){
    //freopen("file.in", "r", stdin);
    //freopen("file.out", "w", stdout);
    int num;
    long long i, first, last, max, denominator, _i;
    while( cin >> num ){
		max = denominator = 1;
		for(int k = 0; k<num; k++ ) max *= 10;
		for(int k = 0; k<num/2; k++ ) denominator *= 10;
		//cout << max << " " << denominator << endl;
		for( i = 0; i<max; i++){
			first = (i/denominator);
			last = i%denominator;
			_i = (first + last) *  (first + last);
			if(i == _i ){
				if(i<10) cout << "0";
				cout << i << endl;
			}
		}
	}
    return 0;
}

// TLE ?? xD
// thug_life
