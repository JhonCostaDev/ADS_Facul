CC = gcc
CFLAGS = -Wall -Iinclude
SRC = main.c src/greet.c
OUT = bin/my_program
$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -O $(OUT)
clean:
	rm -f $(OUT)
	