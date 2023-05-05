#ifndef EXLIB_H
# define EXLIB_H

# include "libft.h"
# include <sys/time.h>

# ifndef NO_PROFILE
#  define	NO_PROFILE	0
# endif

# define PROFILE_RET(prefix, expression)	({ \
	struct timeval	__start__; \
	struct timeval	__end__; \
\
	gettimeofday(&__start__, NULL); \
	__typeof__(expression) result = expression; \
	gettimeofday(&__end__, NULL); \
	if (!NO_PROFILE) \
		printf("%s: %.3f ms\n", prefix, elapsed_time(__start__, __end__)); \
	result; \
})

# define PROFILE(prefix, expression)	({ \
	struct timeval	__start__; \
	struct timeval	__end__; \
\
	gettimeofday(&__start__, NULL); \
	expression; \
	gettimeofday(&__end__, NULL); \
	if (!NO_PROFILE) \
		printf("%s: %.3f ms\n", prefix, elapsed_time(__start__, __end__)); \
})

double	elapsed_time(struct timeval start, struct timeval end);
void	*time_debug(const char *prefix, void *(*ft)(void *), void *arg);

#endif
