# Compiler und Flags
CC = gcc
CFLAGS = -Wall -Wextra -g
LDFLAGS =

# Verzeichnisse
SRC_DIR = src
INC_DIR = include
BUILD_DIR = build
BIN_DIR = bin

# Quelldateien und Objektdateien
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

# Ausführbare Datei
TARGET = $(BIN_DIR)/tournament

# Standardziel
.PHONY: all
all: directories $(TARGET)

# Erstelle Verzeichnisse
.PHONY: directories
directories:
	@mkdir -p $(BUILD_DIR)
	@mkdir -p $(BIN_DIR)

# Kompiliere die ausführbare Datei
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LDFLAGS)

# Kompiliere Objektdateien
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

# Säubere das Projekt
.PHONY: clean
clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

# Führe das Programm aus
.PHONY: run
run: all
	./$(TARGET)

# Debug-Informationen anzeigen
.PHONY: debug
debug:
	@echo "Source files:"
	@echo $(SRCS)
	@echo "Object files:"
	@echo $(OBJS)