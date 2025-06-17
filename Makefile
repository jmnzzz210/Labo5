CC = gcc

CFLAGS = -g -Wall -Wextra -IInclude

TARGET = list_test

SRC = $(wildcard  src/*.c)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^
	
%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS) $(TARGET)
