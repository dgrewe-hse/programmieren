# Makefile for echo and main_args programs

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -g

# Executable names
ECHO_EXECUTABLE = echo
MAIN_ARGS_EXECUTABLE = main_args

# Source files
ECHO_SOURCES = echo.c
MAIN_ARGS_SOURCES = main_args.c

# Object files
ECHO_OBJECTS = $(ECHO_SOURCES:.c=.o)
MAIN_ARGS_OBJECTS = $(MAIN_ARGS_SOURCES:.c=.o)

# Default target
.PHONY: all
all: $(ECHO_EXECUTABLE) $(MAIN_ARGS_EXECUTABLE)

# Rule to build the echo executable
$(ECHO_EXECUTABLE): $(ECHO_OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to build the main_args executable
$(MAIN_ARGS_EXECUTABLE): $(MAIN_ARGS_OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile source files into object files
%.o: %.c
	$(CC) -c $< $(CFLAGS)

# Clean up build files
.PHONY: clean
clean:
	rm -f $(ECHO_OBJECTS) $(MAIN_ARGS_OBJECTS) $(ECHO_EXECUTABLE) $(MAIN_ARGS_EXECUTABLE)

# Run the echo program with parameters
.PHONY: run-echo
run-echo: $(ECHO_EXECUTABLE)
	@echo "Running echo program with parameters..."
	@read -p "Enter a string to echo: " input; \
	./$(ECHO_EXECUTABLE) "$$input"

# Run the main_args program with parameters
.PHONY: run-main-args
run-main-args: $(MAIN_ARGS_EXECUTABLE)
	@echo "Running main_args program with parameters..."
	@read -p "Enter arguments (space-separated): " input; \
	./$(MAIN_ARGS_EXECUTABLE) $$input

# Phony targets
.PHONY: all clean run-echo run-main-args

# Hilfe-Ziel
.PHONY: help
help:
	@echo "Verfügbare Make-Befehle:"
	@echo "  make all       - Kompiliert alle Programme"
	@echo "  make clean     - Löscht alle kompilierten Programme"
	@echo "  make run-main_args - Führt main_args aus"
	@echo "  make run-echo - Führt echo aus"
	@echo "  make run-all   - Führt alle Programme aus"