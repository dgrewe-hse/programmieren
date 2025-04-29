# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -g

# Project name
TARGET = calendar

# Current file structure
SRC = calendar.c
OBJ = $(SRC:.c=.o)

# Directory structure (for future use)
# SRCDIR = src
# INCDIR = include
# OBJDIR = obj

# Future file structure (uncomment when refactoring)
# SRC = $(wildcard $(SRCDIR)/*.c)
# OBJ = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRC))
# INCLUDES = -I$(INCDIR)

# Default target
all: $(TARGET)

# Current build rule
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Future build rules (uncomment when refactoring)
# $(TARGET): $(OBJ)
#	@mkdir -p $(@D)
#	$(CC) $(OBJ) -o $(TARGET)

# $(OBJDIR)/%.o: $(SRCDIR)/%.c
#	@mkdir -p $(@D)
#	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Clean rule
clean:
	rm -f $(TARGET) *.o
	# Future clean additions (uncomment when refactoring)
	# rm -rf $(OBJDIR)/*

# Phony targets
.PHONY: all clean

# Future directory creation (uncomment when refactoring)
# $(shell mkdir -p $(OBJDIR))