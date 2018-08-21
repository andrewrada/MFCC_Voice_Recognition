﻿#include "utils.h"

int find_args(int argc, char * argv[], char * arg)
{
	int i;
	for (i = 0; i < argc; ++i) {
		if (!argv[i]) continue;
		if (0 == strcmp(argv[i], arg)) {
			return 1;
		}
	}
	return 0;
}

void error(char *err)
{
	fprintf(stderr, "error : ", err);
	exit(0);
}