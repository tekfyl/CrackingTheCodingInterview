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

int ct = 0;
// 2^n -1 steps
void move(int disks, int source, int auxiliary, int target){
    if (disks > 0) {
        move(disks - 1, source, target, auxiliary);
    cout << "Move disk " << disks << " from " << source << "->" << target << endl;
        ct++;    
        move(disks - 1, auxiliary, source, target);
    }
}

int main(){
    int n; cin >> n;
    move(n, 1, 2, 3);
    cout << "Total Steps : " << ct << endl;
    return 0;
}

// Just replace the Source, Aux and Target with Stacks.
