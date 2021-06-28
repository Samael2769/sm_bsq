DIR_SOLVER	=	solver/

DIR_GENERATOR	=	generator/

DIR_LIB	=	lib/sm_libc/

CP	=	cp

NAME_SOLVER	=	bsq

NAME_GENERATOR	=	bsq_gen

NAME	=	BSQ

all: $(NAME)

$(NAME): solving generating

solving: sm_libc
	$(CP) $(DIR_LIB)libsm_libc.a $(DIR_SOLVER)
	$(CP) $(DIR_LIB)sm_libc.h $(DIR_SOLVER)/includes
	$(MAKE) -sC $(DIR_SOLVER)
	$(CP) $(DIR_SOLVER)$(NAME_SOLVER) ./

generating: sm_libc
	$(CP) $(DIR_LIB)libsm_libc.a $(DIR_GENERATOR)
	$(CP) $(DIR_LIB)sm_libc.h $(DIR_GENERATOR)/includes
	$(MAKE) -sC $(DIR_GENERATOR)
	$(CP) $(DIR_GENERATOR)$(NAME_GENERATOR) ./

sm_libc:
	$(MAKE) -sC $(DIR_LIB)

clean:
	$(MAKE) -sC $(DIR_SOLVER) clean
	$(MAKE) -sC $(DIR_LIB) clean
	$(MAKE) -sC $(DIR_GENERATOR) clean

fclean:
	$(MAKE) -sC $(DIR_SOLVER) fclean
	$(MAKE) -sC $(DIR_GENERATOR) fclean
	$(MAKE) -sC $(DIR_LIB) fclean
	$(RM) $(NAME_SOLVER) $(NAME_GENERATOR) $(DIR_GENERATOR)libsm_libc.a $(DIR_SOLVER)libsm_libc.a

tests_run: solving generating 
	$(MAKE) -sC $(DIR_LIB) tests_run
	$(MAKE) -sC $(DIR_SOLVER) tests_run
	$(MAKE) -C $(DIR_GENERATOR) tests_run

re: fclean all