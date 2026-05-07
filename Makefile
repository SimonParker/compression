CC = gcc
LIBS = -lm

all: simzip

wav: simzip.c
	$(CC) -o simzip simzip.c $(LIBS)

clean:
	rm -f simzip *.o *.out
