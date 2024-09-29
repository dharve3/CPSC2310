COMPILER = gcc
OPTIONS = -Wall
PROGRAM = driver.out
ARGUMENTS = input.txt

all: $(PROGRAM)

run: $(PROGRAM) $(ARGUMENTS)
	./$(PROGRAM) $(ARGUMENTS)

$(PROGRAM): driver.c functions.c
	$(COMPILER) $(OPTIONS) driver.c functions.c -o $(PROGRAM)

clean:
	rm *.out