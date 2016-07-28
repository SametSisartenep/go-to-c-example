#include "hibye.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usage(char *command)
{
	fprintf(stderr, "\t~$ %s <name>\n\n", command);
}

int main(int argc, char **argv)
{
	if (argc != 2) {
		fprintf(stderr, "Not enough arguments.\n\n");
		usage(argv[0]);
		exit(1);
	}

	GoString name = { argv[1], strlen(argv[1]) };

	say_hello(name);

	say_bye();

	return 0;
}
