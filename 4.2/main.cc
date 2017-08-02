#include <bits/stdc++.h>
#define all(c) c.begin(), c.end()
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector< vi >
#define vvl vector< vector<ll> >
#define mk make_pair
#define ii pair <int, int>
#define LL pair <ll, ll>
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)
double tick(){static clock_t oldt,newt=clock();double diff=(newt-oldt)/CLOCKS_PER_SEC;oldt=newt;return diff;}
using namespace std;

const int N = 55555;

vvi g(N); 
vi vis(N,0);

void dfs(int s){
    vis[s] = 1;
    for(auto v:g[s]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

int main(){
    // Let one node be s and other be t
    int s,t;
    cin >> s >> t;
    dfs(s);
    return vis[t];
    //cout<<"\n"<<"Execution time : "<<tick()<<"\n";
    return 0;
}

