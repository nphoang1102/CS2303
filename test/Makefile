
CC = gcc
CFLAGS = -Os -std=gnu99 -g

LD = gcc
LDFLAGS = -Wall

SIZE = size

#
# Local sources
#
OBJECTS = main.o hello.o name.o


#
# Core make target
#
.PHONY: all
all: main.bin

#
# Linking here
#
main.bin: $(OBJECTS)
	$(LD) $(LDFLAGS) -o $@ $^
	$(SIZE) $@


#
# Clean target
#
.PHONY: clean
clean:
	rm -rf *.o *~ *.bin *.elf

