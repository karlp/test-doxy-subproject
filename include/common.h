//#pragma once

/** @defgroup common Common defines

@brief Common Defined Constants and Types

@author 2017 Karl Palsson <karlp@tweak.net.au>
 */


/** @defgroup common_even_numbers even numbers
 * @ingroup common
 *
 *@{*/
#define EVEN_1	2
#define EVEN_2	4
#define EVEN_3	6
#define EVEN_4	8
/**@}*/

/** @defgroup common_odd_numbers odd numbers
 * @ingroup common
 *@{*/
#define ODD_1 1
#define ODD_2 3
#define ODD_3 5
#define ODD_4 7
/**@}*/


/** @defgroup common_functions Common Functions
 *@{*/
/**
 * Print out all the even defines.
 * @returns who cares?
 */
int print_even(void);
/**
 * Print out all the odd defines.
 * @returns something, maybe.
 */
int print_odd(void);
/**@}*/
