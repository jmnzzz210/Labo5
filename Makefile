CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

TARGET = arreglos_dinamicos

SRCS = main.c src/dynamic_array.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)



