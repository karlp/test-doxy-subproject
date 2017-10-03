
#include <stdio.h>
#include <periph.h>

/** our secret sauce multilier */
#define PERIPH_BBB_MAGIC 99
/** Our spice addition */
#define PERIPH_BBB_SPICE 44

int periph_magic(int magic, int spices)
{
	return magic * PERIPH_BBB_MAGIC + PERIPH_BBB_SPICE;
}

int periph_common_op(int blah)
{
	printf("blah in common op (BBB) was %d\n", blah);
}
