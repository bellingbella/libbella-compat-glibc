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


size_t stringLength(const char* str) {
	return strlen(str);
}

int stringCompare(const char* a, const char* b) {
	return strcmp(a, b);
}

void copyString(const char* src, char* dest) {
	strcpy(dest, src);
}
