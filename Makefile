.PHONY: clean, mrproper

.SUFFIXES:

EXE        = athena
CC         = gcc
CFLAGS     = -W -Wall -ansi -pedantic
LDFLAGS    =

SRC_DIR    = src
BIN_DIR    = bin
OBJ_DIR    = obj
HEADER_DIR = src

SRC       := $(wildcard $(SRC_DIR)/*.c)
HEAD      := $(wildcard $(SRC_DIR)/*.h)
OBJ       := $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

EXEC      =$(BIN_DIR)/$(EXE)

all : $(EXEC)

$(EXEC): $(OBJ) $(HEAD)
	$(CC) -o $@ $^ $(LDFLAGS)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf obj/*

mrproper: clean
	rm -rf bin/*
