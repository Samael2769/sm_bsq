DIR	=	sources/

DIR_TEST	=	tests/

CFLAGS	+=	-W -Wall -Wextra

CPPFLAGS	=	-I./includes

LDFLAGS	= -L.

LDLIBS		=	-lsm_libc

CC	=	gcc

AR	=	ar

COVR	=	gcovr
############################
SRC_FILES	=	\

SRC	=	$(addprefix $(DIR), $(SRC_FILES))

OBJ	=	$(SRC:.c=.o)
############################
SRC_FILES_MAIN	=	main.c\

SRC_MAIN	=	$(addprefix $(DIR), $(SRC_FILES_MAIN))

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)
############################
SRC_FILE_TEST	=	\

SRC_TEST	=	$(addprefix $(DIR_TEST), $(SRC_FILES_TEST))
############################

NAME	=	bsq_gen

TEST_NAME	=	unit_test

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_MAIN)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(LDFLAGS) $(LDLIBS)

$(TEST_NAME):
	$(LDLIBS) += --coverage -lcriterion
	$(CC) -o $(TEST_NAME) $(SRC) $(SRC_TEST) $(LDFLAGS) $(LDLIBS)

tests_run:	unit_test
	./$(TEST_NAME)
	$(COVR) --exclude $(DIR_TEST)
	$(COVR) --exclude $(DIR_TEST) --branch

clean:
		$(RM) -f $(OBJ)
		$(RM) -f $(OBJ_MAIN)

fclean: clean
		$(RM) -f $(NAME)
		$(RM) -f *gc*
		$(RM) -f $(TEST_NAME)

re: fclean all