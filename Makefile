CC=g++
CFLAGS=-g -pedantic -Wall -Wextra -std=c++11
MAKE_OBJ_FLAG=-c

RM=rm -rfv
BINARY=a.out
OBJ_FILES=DateTimeStamper.o a.out.dSYM


all: $(BINARY)

$(BINARY): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) main.cpp -o $(BINARY)

DateTimeStamper.o:
	$(CC) $(CFLAGS) $(MAKE_OBJ_FLAG) DateTimeStamper.cpp 

clean:
	$(RM) $(BINARY) $(OBJ_FILES)

