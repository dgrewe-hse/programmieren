# -------------------------------------------------------------------
# Makefile für das Kalender-Projekt
# Verzeichnisstruktur:
#  - app.c
#  - src/calendar_impl.c
#  - include/calendar.h
# -------------------------------------------------------------------

# 1. Compiler und Compiler-Flags
CC      = gcc
CFLAGS  = -Wall -Wextra -g -I$(INCDIR)
#   -Wall, -Wextra: alle Warnungen aktivieren
#   -g            : Debug-Symbole einbinden
#   -I$(INCDIR)   : Suchpfad für Header-Dateien

# 2. Verzeichnisse
SRCDIR  = src
INCDIR  = include

# 3. Quelldateien
SRCS    = app.c $(SRCDIR)/calendar_impl.c

# 4. Objektdateien (wandelt alle .c in .o um)
OBJS    = $(SRCS:.c=.o)

# 5. Name der ausführbaren Datei
TARGET  = calendar

# -------------------------------------
# 6. Default-Target: "make" oder "make all"
# -------------------------------------
all: $(TARGET)

# -------------------------------------
# 7. Link-Regel
#    Verknüpft alle Objektdateien zu einer Executable
# -------------------------------------
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# -------------------------------------
# 8. Kompilier-Regel (Pattern Rule)
#    Wandelt jede .c-Datei in eine .o-Datei um
#    $<  = Name der Quell-Datei (z.B. app.c)
#    -o  = Ausgabedatei (z.B. app.o)
# -------------------------------------
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# -------------------------------------
# 9. Aufräum-Target "clean"
#    Entfernt alle durch Make erzeugten Dateien
# -------------------------------------
clean:
	rm -f $(OBJS) $(TARGET)

# -------------------------------------
# 10. Phony-Ziele
# -------------------------------------
.PHONY: all clean
#   Ein Phony-Ziel ist KEIN Dateiname, sondern ein reiner Platzhalter.
#   Make führt Phony-Ziele immer aus, auch wenn eine Datei mit demselben
#   Namen existiert. So verhindert man Verwechslungen mit echten Dateien.