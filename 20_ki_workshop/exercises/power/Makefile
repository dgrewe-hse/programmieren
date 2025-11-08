# Makefile for power exercise
#
# Strict compiler flags to catch warnings early
CC = gcc
CFLAGS = -Wall -Wextra -Werror -O0 -g -std=c11

# Targets
all: test_power

# Compile test executable
test_power: tests.c power.c power.h
	$(CC) $(CFLAGS) tests.c power.c -o test_power

# Run tests
test: test_power
	./test_power

# Clean build artifacts
clean:
	rm -f test_power *.o

.PHONY: all test clean

