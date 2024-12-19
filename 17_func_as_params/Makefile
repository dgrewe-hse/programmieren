# Compiler und Flags
CC = gcc
CFLAGS = -Wall -Wextra -g
LDFLAGS =

# Programmnamen
CALCULATOR = calculator
PLOT = plot

# Quelldateien
CALCULATOR_SRC = calculator.c
PLOT_SRC = plot.c

# Standardziel
.PHONY: all
all: $(CALCULATOR) $(PLOT)

# Kompilierung der einzelnen Programme
$(CALCULATOR): $(CALCULATOR_SRC)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

$(PLOT): $(PLOT_SRC)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

# Säubern des Projekts
.PHONY: clean
clean:
	rm -f $(CALCULATOR) $(PLOT)

# Ausführen der Programme
.PHONY: run-simple
run-calculator: $(CALCULATOR)
	./$(CALCULATOR)

.PHONY: run-plot
run-plot: $(PLOT)
	./$(PLOT)

# Ausführen aller Programme
.PHONY: run-all
run-all: run-calculator run-plot

# Hilfe-Ziel
.PHONY: help
help:
	@echo "Verfügbare Make-Befehle:"
	@echo "  make all       - Kompiliert alle Programme"
	@echo "  make clean     - Löscht alle kompilierten Programme"
	@echo "  make run-calculator - Führt calculator aus"
	@echo "  make run-plot - Führt plot aus"
	@echo "  make run-all   - Führt alle Programme aus"