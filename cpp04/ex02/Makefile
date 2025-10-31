# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 12:29:40 by ibennaje          #+#    #+#              #
#    Updated: 2025/10/31 10:39:36 by ibennaje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PRGRM = animal
SRCS =  main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OSRCS = $(SRCS:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror --std=c++98




all : $(PRGRM)

$(PRGRM) : $(OSRCS)
	$(CXX) $(CXXFLAGS) $(OSRCS) -o $(PRGRM)

clean : 
	rm -rf $(OSRCS)

fclean : clean
	rm -rf $(PRGRM)

re : fclean all
