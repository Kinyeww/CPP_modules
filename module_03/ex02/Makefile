NAME = FragTrap
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -I./includes

SRCS = srcs/main.cpp srcs/ClapTrap.cpp srcs/ScavTrap.cpp srcs/FragTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re