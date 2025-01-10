# Compiler und Flags
CC = gcc
CFLAGS = -Wall -Wextra -g
LDFLAGS =

# Programmnamen
SIMPLE_LIST = simple_list
SEARCH_LIST = search_list
REAR_LIST = rear_list
DOUBLE_LIST = double_list
PRIORITY_QUEUE = priority_queue
LIST_MULTI_POINTER = list-multi-pointer

# Quelldateien
SIMPLE_SRC = simple_linked_list.c
SEARCH_SRC = search_linked_list.c
REAR_SRC = simple_linked_list_rear.c
DOUBLE_SRC = double_linked_list.c
PRIORITY_SRC = priority_queue.c
LIST_MULTI_POINTER_SRC = list-multi-pointer.c

# Standardziel
.PHONY: all
all: $(SIMPLE_LIST) $(SEARCH_LIST) $(REAR_LIST) $(DOUBLE_LIST) $(PRIORITY_QUEUE) $(LIST_MULTI_POINTER)

# Kompilierung der einzelnen Programme
$(SIMPLE_LIST): $(SIMPLE_SRC)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

$(SEARCH_LIST): $(SEARCH_SRC)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

$(REAR_LIST): $(REAR_SRC)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

$(DOUBLE_LIST): $(DOUBLE_SRC)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

$(PRIORITY_QUEUE): $(PRIORITY_SRC)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

$(LIST_MULTI_POINTER): $(LIST_MULTI_POINTER_SRC)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

# Säubern des Projekts
.PHONY: clean
clean:
	rm -f $(SIMPLE_LIST) $(SEARCH_LIST) $(REAR_LIST) $(DOUBLE_LIST) $(PRIORITY_QUEUE) $(LIST_MULTI_POINTER)

# Ausführen der Programme
.PHONY: run-simple
run-simple: $(SIMPLE_LIST)
	./$(SIMPLE_LIST)

.PHONY: run-search
run-search: $(SEARCH_LIST)
	./$(SEARCH_LIST)

.PHONY: run-rear
run-rear: $(REAR_LIST)
	./$(REAR_LIST)

.PHONY: run-double
run-double: $(DOUBLE_LIST)
	./$(DOUBLE_LIST)

.PHONY: run-priority
run-priority: $(PRIORITY_QUEUE)
	./$(PRIORITY_QUEUE)

.PHONY: run-list-multi-pointer
run-list-multi-pointer: $(LIST_MULTI_POINTER)
	./$(LIST_MULTI_POINTER)

# Ausführen aller Programme
.PHONY: run-all
run-all: run-simple run-search run-rear run-double run-priority run-list-multi-pointer

# Hilfe-Ziel
.PHONY: help
help:
	@echo "Verfügbare Make-Befehle:"
	@echo "  make all       - Kompiliert alle Programme"
	@echo "  make clean     - Löscht alle kompilierten Programme"
	@echo "  make run-simple- Führt simple_list aus"
	@echo "  make run-search- Führt search_list aus"
	@echo "  make run-rear  - Führt rear_list aus"
	@echo "  make run-double - Führt double_list aus"
	@echo "  make run-priority - Führt priority_queue aus"
	@echo "  make run-list-multi-pointer - Führt list-multi-pointer aus"
	@echo "  make run-all   - Führt alle Programme aus"