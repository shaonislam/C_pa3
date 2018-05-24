
CC = gcc
CFLAGS = -Wall -ansi
TARGET = stats
OBJ = main.o avg.o sum.o min.o max.o

stats: $(OBJ)
	$(CC) $(CFLAGS) -o stats $(OBJ)
main.o : main.c
	$(CC) $(CFLAGS) -c main.c
avg.o: sum.h avg.c
	$(CC) -c $(CFLAGS) avg.c
sum.o: sum.c
	$(CC) -c $(CFLAGS) sum.c
min.o: min.c
	$(CC) -c $(CFLAGS) min.c
max.o: max.c
	$(CC) -c $(CFLAGS) max.c
clean:
	/bin/rm -f *.o $(TARGET)
