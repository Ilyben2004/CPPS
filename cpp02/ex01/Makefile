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