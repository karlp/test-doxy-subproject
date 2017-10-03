#include <stdio.h>
#include <periph.h>

/** our secret sauce multilier */
#define PERIPH_AAA_MAGIC 42

int periph_magic(int magic)
{
	return magic * PERIPH_AAA_MAGIC;
}

int periph_common_op(int blah)
{
        printf("blah in common op (AAA) was %d\n", blah);
}

