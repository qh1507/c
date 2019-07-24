#include <stdio.h>
#include "compare.h"


int main() {
    int a = 1, b = 2;

    printf("Test min(a,b) a = 1, b = 2, min is %d \n",min(a,b));
    printf("Test max(a,b) a = 1, b = 2, max is %d \n",max(a,b));
    return 0;
}