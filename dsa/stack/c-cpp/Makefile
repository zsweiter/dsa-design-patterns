OS := $(shell uname -s)

CC := gcc       # C
CXX := g++      # C++

CFLAGS := -Wall -Wextra -std=c17
CXXFLAGS := -Wall -Wextra -std=c++17

C_SRC := main.c
CPP_SRC := main.cpp

ifeq ($(OS),Linux)
    C_TARGET := stack_c
    CPP_TARGET := stack_cpp
else ifeq ($(OS),Darwin)
    C_TARGET := stack_c
    CPP_TARGET := stack_cpp
else
    C_TARGET := stack_c.exe
		CPP_TARGET := stack_cpp.exe
endif

all: c cpp

c: $(C_TARGET)

$(C_TARGET): $(C_SRC)
	$(CC) $(CFLAGS) $(C_SRC) -o $(C_TARGET)

cpp: $(CPP_TARGET)

$(CPP_TARGET): $(CPP_SRC)
	$(CXX) $(CXXFLAGS) $(CPP_SRC) -o $(CPP_TARGET)

clean:
	rm -f $(C_TARGET) $(CPP_TARGET)
ifeq ($(OS),Windows_NT)
	del $(C_TARGET) $(CPP_TARGET)
endif

.PHONY: all c cpp clean

