# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 14:25:26 by maperrea          #+#    #+#              #
#    Updated: 2021/11/11 14:37:39 by maperrea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= FR4G-TP

INCDIR			= ./

SRCDIR			= ./

SRCS			= ./ClapTrap.cpp ./FragTrap.cpp ./main.cpp ./ScavTrap.cpp

OBJDIR			= obj

OBJ				= $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

CC				= clang++ -g -fsanitize=address

CFLAGS			= -Wall -Wextra -Werror

RM				= rm -f

$(OBJDIR)/%.o:	$(SRCDIR)/%.cpp
				mkdir -p $(OBJDIR)
				$(CC) $(CFLAGS) -I$(INCDIR) -c $^ -o $@

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) -I$(INCDIR) $(OBJ) -o $(NAME)

clean:
				$(RM) -r $(OBJDIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all
