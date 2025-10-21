# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 12:29:19 by ibennaje          #+#    #+#              #
#    Updated: 2025/10/20 12:29:20 by ibennaje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PRGRM = fixed_point
SRCS =  main.cpp Fixed.cpp utils.cpp
OSRCS = $(SRCS:.cpp=.o)
CXX = c++
CXXFLAGS =  --std=c++98 #-Wall -Wextra -Werror

all : $(PRGRM)

$(PRGRM) : $(OSRCS)
	$(CXX) $(CXXFLAGS) $(OSRCS) -o $(PRGRM)


clean : 
	rm -rf $(OSRCS)

fclean : clean
	rm -rf $(PRGRM)

re : fclean all