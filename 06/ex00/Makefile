# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 14:25:26 by maperrea          #+#    #+#              #
#    Updated: 2021/11/26 17:01:21 by maperrea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= convert

INCDIR			= ./

SRCDIR			= ./

SRCS			= converter.cpp \

OBJDIR			= obj

OBJ				= $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

CC				= clang++

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
