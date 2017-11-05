#include <bits/stdc++.h>
using namespace std;

int main(){
    int num, rev;
    int dec[] = {1, 10, 100, 1000, 10000, 100000, 1000000};
    char str[30];
    
    bool notPrime[1000000] = {};
    for( int i = 2; i<1001; i++){
		if( !notPrime[i] ){
			for( int j = i+i; j<1000000; j+=i ) notPrime[j] = true;
		}
    }
	notPrime[0] = notPrime[1] = true;
	
    while( ~scanf("%s", str) ){
        num = rev = 0;
        int len = strlen( str ); 
        for( int i = 0, j = len - 1; i < len; i++, j-- ){
            rev += (str[i] - '0') * dec[i];
            num += (str[j] - '0') * dec[i];
        }
		//nice. no?
		
        if( notPrime[num] ) printf("%d is not prime.\n", num);
        else{
            if( num == rev || notPrime[rev] ) printf("%d is prime.\n", num);
            else printf("%d is emirp.\n", num);
        }
    }
    return 0;
}
