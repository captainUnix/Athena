.PHONY: clean, mrproper
.SUFFIXES:

CC = gcc
CFLAGS = -W -Wall -ansi -pedantic
LDFLAGS=

SRC_DIR   = src
BIN_DIR   = bin

SRC  := $(wildcard $(SRC_DIR)/*.c)
OBJ  := $(SRC:$(SRC_DIR)/%.c=$(BIN_DIR)/%.o)

EXEC=athena

all : $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

$(BIN_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf *.o

mrproper: clean
	        rm -rf $(EXEC)
