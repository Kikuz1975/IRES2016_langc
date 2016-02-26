#include "product.h"
#include "sum.h"

int product(int a, int b) {
	int totale = 0;
    for (int i = 1; i <= b; i++)
        totale = sum(totale, a);
    return totale;
}
