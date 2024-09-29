COMPILER = gcc
OPTIONS = -Wall
PROGRAM = driver.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): driver.c functions.c
	$(COMPILER) $(OPTIONS) driver.c functions.c -o $(PROGRAM)

clean:
	rm *.out