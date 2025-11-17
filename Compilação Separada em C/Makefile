CC := gcc
CFLAGS := -Wall -Wextra -pedantic -std=c11 -lm
TARGET := main
SRCS := main.c soma.c subtrai.c mult.c div.c modulo.c potencia.c
OBJS := $(SRCS:.c=.o)

.PHONY: all clean run
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $@

main.o: main.c soma.h subtrai.h
soma.o: soma.c soma.h
subtrai.o: subtrai.c subtrai.h
mult.o: mult.c mult.h
div.o: div.c div.h
modulo.o: modulo.c modulo.h
potencia.o: potencia.c potencia.h

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
