.PHONY: clean, mrproper
.SUFFIXES:

CC = gcc
CFLAGS = -W -Wall -ansi -pedantic
LDFLAGS=

SRC= 
OBJ= $(SRC:.c=.o)

EXEC=test

#compilation law

all : $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)


clean:
	rm -rf *.o

mrproper: clean
	        rm -rf $(EXEC)
