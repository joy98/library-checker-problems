#include <iostream>
#include "random.h"
#include "../params.h"

using namespace std;
using ll = long long;

int main(int, char* argv[]) {

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int n = seed + 1;
    
    printf("%d\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d", gen.uniform<int>(0, MOD - 1));
        if (i != n - 1) printf(" ");
    }
    printf("\n");
    return 0;
}
