CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

TARGET = stack_pilas

SRCS = main.c src/stack.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)



