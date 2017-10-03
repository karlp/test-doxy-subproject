/**@defgroup periph Peripheral things
 *@{
 */
//#pragma once

#if defined (PROJECT_AAA)
#include <aaa/periph.h>
#elif defined (PROJECT_BBB)
#include <bbb/periph.h>
#else
#error "Undefined PROJECT_ "
#endif

/**@defgroup periph_common Peripheral Common
 *@{*/
/**
 * Some dumb simple common operation of the peripheral.
 * @param blah who cares, it will be ignored.
 * @returns doesn't matter, no one will use it anyway
 */
int periph_common_op(int blah);
/**@}*/ /* end of periph_common */
/**@}*/
