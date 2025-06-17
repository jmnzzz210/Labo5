
CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

TARGET = estructuras_datos

SRCS = main.c src/*.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
