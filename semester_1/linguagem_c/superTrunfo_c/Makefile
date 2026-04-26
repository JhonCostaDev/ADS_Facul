CC = gcc
CFLAGS = -Wall -I include
SRC = main.c src/managerCards.c
OUT = main.out
$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)
clean:
	rm -f $(OUT)