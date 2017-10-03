#include <stdio.h>
#include <common.h>
#include <periph.h>

int main(int argc, char **argv) {
#if defined(PROJECT_AAA)
	print_even();
	printf("\nmagic AAA was: %d\n", periph_magic(2));
#elif defined(PROJECT_BBB)
	print_odd();
	printf("\nmagic BBB was: %d\n", periph_magic(2, 3));
#else
	printf("that other thing, not even nor odd?\n");
#endif
	periph_common_op(9);
}
