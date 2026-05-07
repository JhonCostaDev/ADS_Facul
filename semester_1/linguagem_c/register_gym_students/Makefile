CC = gcc
CFLAGS = -Wall -I include
SRC = main.c src/managerStudent.c
OUT = registerStudent
$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)
clean:
	rm -f $(OUT)