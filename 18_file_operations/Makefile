# Makefile for file_operations program

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -g

# Executable name
EXECUTABLE = file_operations

# Source files
SOURCES = file_operations.c

# Object files
OBJECTS = $(SOURCES:.c=.o)

# Default target
.PHONY: all
all: $(EXECUTABLE)

# Rule to build the executable
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile source files into object files
%.o: %.c
	$(CC) -c $< $(CFLAGS)

# Clean up build files
.PHONY: clean
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

# Run the program
.PHONY: run
run: $(EXECUTABLE)
	./$(EXECUTABLE)

# Phony targets
.PHONY: all clean run
