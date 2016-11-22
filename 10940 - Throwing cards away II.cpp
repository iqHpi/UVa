#include <bits/stdc++.h>
using namespace std;

int main(void){
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	deque <int> deck;
	int top, var;
	while( cin >> top, top ){
		for(int i = 1; i<=top; i++) deck.push_back(i);
		
		for(int i = 1; i<top; i++){
			deck.pop_front();
			var = deck.front();
			deck.push_back(var);
			deck.pop_front();
		}
		cout << deck.front() << endl;
		deck.pop_front();
	}
    return 0;
}
