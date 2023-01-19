NAME	:=	libft.a
SRCS	:=	${wildcard */ft_*.c} ${wildcard */*_ft.c}
OBJS	:=	${patsubst %.c, %.o, ${SRCS}}
INCLUDE	:=	include/
HEADER	:=	${wildcard ${INCLUDE}*.h}
CC		:=	gcc
CFLAGS	:=	-Wall -Wextra -Werror
RM		:=	rm -rf

all : ${NAME}

testdir :
	@echo ${wildcard */}

${NAME} : ${OBJS}
	@ar rcs $@ $^

%.o : %.c ${HEADER}
	${CC} ${CFLAGS} -I ${INCLUDE} -c $< -o $@

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
	@cp $< libftprintf.a && make -C $@ && $@/test
	@${RM} libftprintf.a

TEST_DIR	:=	experiment/
SRCS_TEST	:=	${wildcard ${TEST_DIR}*.c}
PRG_TEST	:=	${SRCS_TEST:${TEST_DIR}%.c=%.miku}

test : ${NAME}
	@sh eshperiment.sh test

testsan : ${SRCS} ${TEST_DIR}test.c
	@${CC} ${CFLAGS} -I ${INCLUDE} $^ -fsanitize=address -g3 -o test.miku 
	@./test.miku

.PHONY : test pft
