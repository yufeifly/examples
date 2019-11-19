#
# Copyright 2014-2016, Intel Corporation
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
PROGS = copy

LIBS = -lpmem -pthread

#include ./Makefile.inc

copy: copy.c
	gcc -g -o $(PROGS) copy.c $(LIBS)

clean:
	rm -rf $(PROGS)
