#ifndef MAD_INTER_H
#define MAD_INTER_H

struct command;

// interface

/* Warning:
   these functions must be called close to each other
   they backup some states of the current node in global variables (side effects)
   that must be restored. Hence, node iteration are forbidden between their call.
*/
int interpolate_node(int *nint);
int reset_interpolation(void);

int start_interp_node(int* i);
int fetch_interp_node(int* i, double* dl);

void select_interp(struct command*);

#endif // MAD_INTER_H

