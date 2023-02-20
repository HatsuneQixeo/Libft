NAME		:=	libft.a
CC			:=	gcc
CFLAGS		:=	-Wall -Wextra -Werror
HEADER_DIR	:=	include/
HEADER		:=	$(wildcard ${HEADER_DIR}*.h)
INCLUDE		:=	-I${HEADER_DIR}
SRC_DIR		:=	$(patsubst .%, %, $(patsubst ./%, %/, $(shell find . -type d)))
SRCS		:=	$(wildcard $(foreach dir, ${SRC_DIR}, ${dir}ft_*.c) $(foreach dir, ${SRC_DIR}, ${dir}*_ft.c))
OBJ_DIR		:=	~obj/
OBJS		:=	$(patsubst %.c, ${OBJ_DIR}%.o, ${SRCS})
TEST_DIR	:=	experiment/
RM			:=	rm -rf

all: ${NAME}

showinclude:
	@for header in ${HEADER}; do echo $$header; done

showobj:
	@for obj in ${OBJS}; do echo $$obj; done

showsrc:
	@for src in ${SRCS}; do echo $$src; done

${NAME}: ${OBJS}
	@ar rcs $@ $^ && echo Library Made: $@

${OBJ_DIR}%.o: %.c ${HEADER}
	@mkdir -p ${@D}
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

clean:
	${RM} ${OBJ_DIR}

fclean: clean
	${RM} ${NAME} ${shell find . -name "*.miku"} ${shell find . -name "*.dSYM"}

re: fclean all

norm:
	@norminette ${SRCS} ${HEADER}

norme:
	@norminette ${SRCS} ${HEADER} | grep Error

pft: ${NAME}
	@cp $< libftprintf.a && make -C $@ && $@/test
	@${RM} libftprintf.a

.PHONY: test pft
