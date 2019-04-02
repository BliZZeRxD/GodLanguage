#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int k, m, n;
int main() {
   scanf(" %d %d %d", &k, &m, &n);
   printf("%d", (int)ceil((float)n * 2 / min(k, n)) * m);
   return 0;
}
