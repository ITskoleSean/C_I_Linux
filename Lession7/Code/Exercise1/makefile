CC = gcc
CFLAG = -Wall -O0
OBJ = how_many_times_called.o
DEPS = how_many_times_called.h

%.o: %.c $(DEPS)
	$(CC) -c $@ $< $(CFLAG) -o ex1

how_many_times_called: $(OBJ)
	$(CC) -o $@ $^ $(CFLAG)