NAME	:=	libft.a
CC		:=	gcc
CFLAGS	:=	-Wall -Wextra -Werror
INCLUDE	:=	include/
HEADER	:=	$(wildcard ${INCLUDE}*.h)
SRC_DIR	:=	$(patsubst .%, %, $(patsubst ./%, %/, $(shell find . -type d)))
SRCS	:=	$(wildcard $(foreach dir, ${SRC_DIR}, ${dir}ft_*.c) $(foreach dir, ${SRC_DIR}, ${dir}*_ft.c))
OBJ_DIR	:=	~obj/
OBJS	:=	$(addprefix ${OBJ_DIR}, $(patsubst %.c, %.o, ${SRCS}))
TEST_DIR:=	experiment/
RM		:=	rm -rf

all : ${NAME}

showinclude:
	@for header in ${HEADER}; do echo $$header; done

showobj:
	@for obj in ${OBJS}; do echo $$obj; done

showsrc:
	@for src in ${SRCS}; do echo $$src; done

${NAME} : ${OBJS}
	@ar rcs $@ $^ && echo Library Made: $@

${OBJ_DIR}%.o : %.c ${HEADER}
	@mkdir -p ${@D}
	${CC} ${CFLAGS} -I ${INCLUDE} -c $< -o $@

clean :
	${RM} ${OBJ_DIR}

fclean : clean
	${RM} ${NAME} ${wildcard ${TEST_DIR}*.miku} ${wildcard *.dSYM}

re : fclean all

norm :
	@norminette ${SRCS} ${HEADER}

norme :
	@norminette ${SRCS} ${HEADER} | grep Error

pft : ${NAME}
	@cp $< libftprintf.a && make -C $@ && $@/test
	@${RM} libftprintf.a

.PHONY : test pft
