NAME = megaphone
GPP = g++
GPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(GPP) $(GPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(GPP) $(GPPFLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re