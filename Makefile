.PHONY: clean, mrproper
.SUFFIXES:

CC = gcc
CFLAGS = -W -Wall -ansi -pedantic
LDFLAGS=

SRC_DIR= src
SRC= $(wildcard $(SRC_DIR)/*.c)
OBJ= $(SRC:.c=.o)

EXEC=athena

all : $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)


clean:
	rm -rf *.o

mrproper: clean
	        rm -rf $(EXEC)
