# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/08 22:03:53 by rpunet            #+#    #+#              #
#    Updated: 2021/01/08 22:51:20 by rpunet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
CLANG	= clang++
FLAGS	= -Wall -Wextra -Werror
SRCS	= megaphone.cpp
OBJS	= $(SRCS:.cpp=.o)

# en este caso no haría falta el paso de crear .o intermedios, solo hay un archivo, por lo que cualquier modificación en el, rehará el programa, con o sin .o intermedios.

%.o:		%.cpp
			@$(CLANG) -c $(FLAGS) $(SRCS)

$(NAME):	$(OBJS)
			@$(CLANG) -o $(NAME) $(FLAGS) $(OBJS)
			@echo "$@ compiled"

all:		$(NAME)

clean:
			@echo "Removing objects"
			@rm -rf $(OBJS)

fclean:
			@echo "Removing all"
			@rm -rf $(OBJS)
			@rm -f $(NAME)

re:			fclean all

run:		all
			./megaphone "shhhhh... I think the students are asleep..."
			./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
			./megaphone

.PHONY:		all clean fclean re run
