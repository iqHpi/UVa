
#include <bits/stdc++.h>
using namespace std;

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int main(){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	char str[1024], lol;
	
	while( scanf("%s%c", str, &lol) != EOF ){
		printf("%s%c", strrev(str), lol);
	}
    return 0;
}
