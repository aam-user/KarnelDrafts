CC = gcc
CFLAGS = -Wall -Wextra -g

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
TARGET = build/programma

all: $(TARGET)

$(TARGET): $(OBJ)
	mkdir -p build
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)