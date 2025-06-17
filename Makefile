
CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

TARGET = estructuras_datos

SRCS = main.c $(wildcard src/*.c)
OBJS = main.o src/dynamic_array.o src/stack.o src/list_test.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@

src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
