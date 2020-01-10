#include <algorithm>
#include <cmath>
#include <cstudio>
#include <cstring>
using namespace std;
int N, target;
double dist[20][20], memo[1<<16];

double macthing(int bitmask){
    if(memo[bitmask]>-0.5) return memo[bitmask];
    if(bitmask == target) return memo[bitmask] = 0;

    double ans = 2000000000.0;
    
}
