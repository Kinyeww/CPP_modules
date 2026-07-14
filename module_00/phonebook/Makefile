NAME = phonebook
GPP = g++
GPPFLAGS = -Wall -Wextra -Werror -std=c++98 -I./includes

SRCS = srcs/main.cpp srcs/PhoneBook.cpp srcs/Contact.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(GPP) $(GPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(GPP) $(GPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

me: re
	rm -rf $(OBJS)

.PHONY: all clean fclean re me