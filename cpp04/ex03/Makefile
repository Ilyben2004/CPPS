# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 12:29:40 by ibennaje          #+#    #+#              #
#    Updated: 2025/11/10 10:10:49 by ibennaje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PRGRM = amateria	
SRCS = AMateria.cpp  AMateriaList.cpp  Character.cpp  Cure.cpp  Ice.cpp  main.cpp  MateriaSource.cpp  Node.cpp

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
