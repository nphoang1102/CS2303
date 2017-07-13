
CC = gcc
CFLAGS = -Os -std=gnu99 -g

LD = gcc
LDFLAGS = -Wall

SIZE = size
OBJCOPY = objcopy

#
# Local sources
#
OBJECTS = main.o hello.o

# For legacy
#CFLAGS += -DORIGINAL_USB_PROTOCOL
#OBJECTS += uart_orig.o report.o

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

