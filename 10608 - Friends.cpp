#include <iostream>
using namespace std;
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
typedef pair<int, int>     		ii;
typedef vector<int>        		vi;
typedef vector<ii>         		vii;
typedef unsigned long long 		ULL;
typedef long long          		LL;
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
#define r()                		freopen("file.in", "r", stdin);
#define w()                		freopen("file.out", "w", stdout);
#define fast_IO            		ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define min3(a,b,c)        		min(a, min(b,c));
#define max3(a,b,c) 	   		max(a, max(b,c));
#define rep(id,start,end)  		for( int id = start; id < end; id++ )
#define ms(var, value)     		memset(var, value, sizeof var)
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
inline LL bigmod(LL p, LL e, LL M){ LL ret = 1; for(; e > 0; e >>= 1){
	if(e & 1) ret = (ret * p) % M; p = (p * p) % M;} return ret;}
inline int read(){int x=0,f=1;char ch=getchar();while(ch<'0'||ch>'9'){
	if(ch=='-')f=-1;ch=getchar();}while(ch>='0'&&ch<='9')
	{x=x*10+ch-'0';ch=getchar();}return x*f;}
inline LL inversemod(LL a, LL M){ return bigmod(a,M-2,M); }
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

int parent[30001], cluster_size[30001], max_size;

void make_set(int n){
    for(int i = 1; i <= n; ++i){
        parent[i] = i;
        cluster_size[i] = 1;
    }
    max_size = 1;
}

int find_set(int v){
    if(parent[v] == v) return v;

    parent[v] = find_set(parent[v]);
    return parent[v];
}

void union_sets(int a, int b){
    a = find_set(a);
    b = find_set(b);

    if(a != b){
        if(cluster_size[a] < cluster_size[b]) swap(a, b);
        
        parent[b] = a;
        cluster_size[a] += cluster_size[b];

        if(cluster_size[a] > max_size) max_size = cluster_size[a];
    }
}

int main(){
    int tc, n, m, a, b;

    tc = read();

    while(tc--){
        n = read();
        m = read();
        make_set(n);
        while (m--){
            a = read();
            b = read();
            union_sets(a, b);
        }
        printf("%d\n", max_size);
    }
    return 0;
}
