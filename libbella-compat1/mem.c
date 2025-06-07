/*
	compat-glibc/libbella-compat1.c 
	Bella Compatibility Library
	(C) 2025 by Belling Bella https://github.com/bellingbella
*/

#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void *memoryAllocation(size_t size) {
	return malloc(size);
}

void freeAllocatedMemory(void* ptr) {
	free(ptr);
}



void copyMemory(void* dest, const void* src, size_t size) {
	memcpy(dest, src, size);
}
