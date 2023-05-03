# libft

The library I will use along C related project


Some source code that might worth your time to read are string/ft_strmodify.c and printf as a whole

latter will take some time

Facing a lot of questions with NULL return value from a map function

Whether is it justified to have 2darray be terminated by NULL is a question itself
	- If it is terminated by NULL, how should it react to ft_map return NULL.
		1) If we just assumed it is meant to be excluded, this could easily result in undefined behaviour if the memory is temporarily unavailable
		2) If we cleared everything under the assumption that it is a malloc error, then linked list with a NULL content would cause a lot of potential problem.
	- If NULL could not be assumed as the end of the array, wouldn't it be too easy to crash the program ? Not to mention the inconvenience that every related functions would need to ask for the length
Let's make a assumption that map function returning NULL is an error, that makes things slightly easier