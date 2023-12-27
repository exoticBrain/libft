CC = gcc
CFLAGS = -g -Wall -Wextra -Werror

# List your source files
SRC = main.c ft_strlen.c ft_isalpha.c ft_isspace.c ft_isdigit.c \
      ft_isprint.c ft_memset.c ft_bzero.c ft_memmove.c \
	  ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	  ft_strncmp.c ft_strcmp.c ft_memchr.c ft_memcmp.c \
	  ft_strnstr.c ft_atoi.c ft_strcpy.c ft_strncpy.c \
	  ft_strcat.c ft_strncat.c ft_strlcpy.c ft_strlcat.c \
	  ft_calloc.c ft_strdup.c ft_memcpy.c ft_substr.c \
	  ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	  ft_strmapi.c ft_striteri.c

# Derive object file names from source file names
OBJ = $(SRC:.c=.o)

# Specify the name of the executable
TARGET = my_program

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

