/*
 * offsetof is a macro.
 * This  macro is useful because the sizes of the fields that compose a structure can vary across implementa‐
       tions, and compilers may insert different numbers of padding bytes between fields.  Consequently, an  ele‐
       ment's offset is not necessarily given by the sum of the sizes of the previous elements.
 */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    struct s {
        int i;
        char c;
        double d;
        char a[];
    };

    /* Output is compiler dependent */

    printf("offsets: i=%zu; c=%zu; d=%zu a=%zu\n",
           offsetof(struct s, i), offsetof(struct s, c),
    offsetof(struct s, d), offsetof(struct s, a));
    printf("sizeof(struct s)=%zu\n", sizeof(struct s));

    exit(EXIT_SUCCESS);
}
