/*
    Copyright (c) 2017 Cornelius Toole, Ph.D. All rights reserved.
*/

#ifndef HYPERCORE_H
#define HYPERCORE_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

struct hc_feed {
	int id;
	const char* key;
	const char* discoveryKey;
	// void* stream;
	// void* peer;
	int remote_id;
	int header;
	int header_length;
	_Bool closed;
	//void* _buffer;
};

void hc_hello_hypercore();
#endif
