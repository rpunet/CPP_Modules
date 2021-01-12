# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/10 12:16:38 by rpunet            #+#    #+#              #
#    Updated: 2021/01/10 13:13:42 by rpunet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= crapbook
CLANG	= clang++
FLAGS	= -Wall -Wextra -Werror
SRCS	= main.cpp  crapbook.cpp  contact.cpp
OBJS	= $(SRCS:.cpp=.o)

%.o:		%.cpp
			@$(CLANG) -c $(FLAGS) -I. $(SRCS)

$(NAME):	$(OBJS)
			@$(CLANG) -o $(NAME) $(FLAGS) -I. $(OBJS)
			@echo $@ compiled!

all:		$(NAME)

clean:
			@rm -f $(OBJS)
			@echo Objects removed!

fclean:
			@rm -f $(OBJS)
			@rm -f $(NAME)
			@echo All cleared!

re:			fclean all

run:		all
			./$(NAME)

.PHONY:		all clean fclean re
