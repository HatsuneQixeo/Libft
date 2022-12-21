NAME := libft.a

SRCS := ${wildcard */ft_*.c} ${wildcard */*_ft.c}

CC := gcc

CFLAGS := -Wall -Wextra -Werror

OBJS := ${patsubst %.c, %.o, ${SRCS}}

INCLUDE := include/

HEADER := ${wildcard ${INCLUDE}*.h}

RM := rm -f

all : ${NAME}

${NAME} : ${OBJS}
	@ar rcs $@ $^

%.o : %.c ${HEADER}
	${CC} ${CFLAGS} -I ${INCLUDE} -c $< -o $@

TEST_DIR := experiment/

SRCS_TEST := ${wildcard ${TEST_DIR}*.c}

PRG_TEST := ${SRCS_TEST:${TEST_DIR}%.c=%.miku}

test : ${NAME}
	@sh eshperiment.sh test

testsan : ${SRCS} ${TEST_DIR}test.c
	@${CC} ${CFLAGS} -I ${INCLUDE} $^ -fsanitize=address -g3 -o test.miku 
	@./test.miku

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME} ${wildcard *.miku} ${wildcard *.dSYM}

re : fclean all

norm :
	@norminette ${SRCS} ${HEADER}

norme :
	@norminette ${SRCS} ${HEADER} | grep Error

pft : ${NAME}
	@cp $< libftprintf.a && cd pft && make && ./test
	@${RM} libftprintf.a

.PHONY : test pft
