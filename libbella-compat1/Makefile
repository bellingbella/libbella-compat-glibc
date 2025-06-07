# Makefile CON, dùng cho từng module con như libbella-compat1

CC ?= gcc
LD ?= ld

WORKING_DIRECTORY ?= ..
MNAME ?= $(notdir $(CURDIR))

.PHONY: all module clean

all: module

module:
	@mkdir -p $(WORKING_DIRECTORY)/output/lib
	@for scode in $$(cat HEADER.txt); do \
		$(CC) -c -o $$scode.o $$scode.c; \
	done
	$(LD) $$(cat PARAMETERS.build.txt) -o $(WORKING_DIRECTORY)/output/lib/$(MNAME).so *.o

clean:
	@rm -f *.o *.so *.elf
