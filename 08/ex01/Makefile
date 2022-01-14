# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 14:25:26 by maperrea          #+#    #+#              #
#    Updated: 2022/01/07 12:01:12 by maperrea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= span

INCDIR			= ./

SRCDIR			= ./

SRCS			= ./main.cpp ./Span.cpp

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
