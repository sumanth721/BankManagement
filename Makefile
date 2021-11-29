# makefile to create executables for socket programming

# set the compiler 
CC := g++

# set the flags
CFLAG := -c -Iinclude/
OFLAG := -o
WFLAG := -Wall -Werror

# set the target files
INC := $(wildcard inc/*.h)
SRC := $(wildcard src/*.cpp) 

# set dependecies
OBJ := $(patsubst %.c, %.o, $(SRC)) 

# set executables
BMS := bin/pBMNS

$(BMS): $(OBJ) 
	$(CC) $(WFLAG) $(OFLAG) $@ $^

# .phony : clean

clean: 
	rm -rf $(OBJ) 

