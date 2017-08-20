# Make file, can't list source
#
# Author: Hoang Nguyen
#
#

CC = gcc
CFLAGS = -Os -std=gnu99 -g

LD = gcc
LDFLAGS = -Wall -Werror -Wmissing-prototypes

SIZE = size

#
# Local sources
#
OBJECTS = main.o

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
	rm -rf *.o *~ *.bin

