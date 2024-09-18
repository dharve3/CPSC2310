# add comments
CC=gcc
CFLAGS=-Wall -g -I src
LFLAGS=-lm
TARGET=out


# add comments
C_SRCS := \
  $(wildcard *.c) \
  $(wildcard src/*.c) \
  $(wildcard src/**/*.c)
# add comments
HDRS := \
  $(wildcard *.h) \
  $(wildcard src/*.h) \
	$(wildcard src/**/*.h)
# add comments
OBJS := $(patsubst %.c, bin/%.o, $(wildcard *.c))
OBJS += $(filter %.o, $(patsubst src/%.c, bin/%.o, $(C_SRCS)))


# add comments
all: build
		@echo "All Done"


# add comments
build: $(OBJS)
		$(CC) $(OBJS) -o $(TARGET) $(LFLAGS)


# add comments
bin/%.o: %.c $(HDRS)
		@mkdir -p $(dir $@)
		$(CC) $(CFLAGS) -c $< -o $@


# add comments 
bin/%.o: src/%.c $(HDRS)
		@mkdir -p $(dir $@)
		$(CC) $(CFLAGS) -c $< -o $@




#add comments
clean:
		rm -f $(TARGET)
		rm -rf bin
#add comments
run: build
		./$(TARGET) < put your command line arguments here>
#add comments
which:
		@echo "FOUND SOURCES: ${C_SRCS}"
		@echo "FOUND HEADERS: ${HDRS}"
		@echo "TARGET OBJS: ${OBJS}"

