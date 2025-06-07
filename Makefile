# Makefile GỐC ở thư mục compat-glibc

CC = gcc
LD = ld

HEADER_FILE = HEADER.txt
WORKING_DIRECTORY := $(shell pwd)

.PHONY: all clean

all:
	@mkdir -p output/lib
	@mkdir -p output/bin
	@mkdir -p output/share
	@for dir in $$(cat $(HEADER_FILE)); do \
		$(MAKE) -C $$dir \
			CC=$(CC) \
			LD=$(LD) \
			WORKING_DIRECTORY=$(WORKING_DIRECTORY) \
			MNAME=$$dir \
			module; \
	done

clean:
	@for dir in $$(cat $(HEADER_FILE)); do \
		$(MAKE) -C $$dir clean; \
	done
	@rm -rf output

install:
	sudo cp -r output/* /usr/
	sudo cp -r include/* /usr/include