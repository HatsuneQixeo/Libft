NAME		:=	libft.a

CC			:=	gcc
CFLAGS		:=	-Wall -Wextra -Werror

SRC_DIR		:=	srcs
SRCS		:=	$(shell find ${SRC_DIR} -name "ft_*.c") $(shell find ${SRC_DIR} -name "*_ft.c")

INCLUDE		:=	include
HEADER		:=	$(wildcard ${INCLUDE}/*.h)

OBJ_DIR		:=	~obj
OBJS		:=	$(patsubst ${SRC_DIR}/%.c, ${OBJ_DIR}/%.o, ${SRCS})

EXLIB_DIR	:=	experiment/exlib
EXLIB_MAKE	:=	make -C ${EXLIB_DIR}

all: ${NAME}

showheader:
	@for header in ${HEADER}; do echo $$header; done

showobj:
	@for obj in ${OBJS}; do echo $$obj; done

showsrc:
	@for src in ${SRCS}; do echo $$src; done

${NAME}: ${OBJS}
	@ar -rcs $@ $^ && echo Library Made: $@

${OBJ_DIR}/%.o: ${SRC_DIR}/%.c ${HEADER}
	@mkdir -p ${@D}
	${CC} ${CFLAGS} -I${INCLUDE} -c $< -o $@

clean:
	${EXLIB_MAKE} clean
	${RM} -r ${OBJ_DIR}

fclean: clean
	${EXLIB_MAKE} fclean
	${RM} ${NAME} ${shell find . -name "*.miku"} ${shell find . -name "*.dSYM"}

re: fclean all

norm:
	@norminette ${SRCS} ${HEADER}

norme:
	@norminette ${SRCS} ${HEADER} | grep Error

pft: ${NAME}
	@cp $< libftprintf.a && cd $@ && make && ./test
	@${RM} libftprintf.a

header:
	42header.sh ${SRC_DIR} ${INCLUDE}

.PHONY: test pft
