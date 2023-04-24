#ifndef EXLIB_H
# define EXLIB_H

# include "libft.h"
# include <sys/time.h>

double	elapsed_time(struct timeval start, struct timeval end);
void	*time_debug(const char *prefix, void *(*ft)(void *), void *arg);

#endif
