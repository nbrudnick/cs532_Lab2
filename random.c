#include "types.h"
#include "user.h"
#include "rand.h"

int 
main(int argc, char *argv[])
{
	int r = -1;
	if(argc > 1)
	{
			srand(argv[1]);
	}
	for(int i = 0 ; i < 10; ++i)
	{
		r = rand();
		printf(1, "random number is: %d\n", r);

	}
	exit();
/*
	if (argc != 3) {
		fprintf(stderr, "Usage: %s <seed> <nloops>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	seed = atoi(argv[1]);
	nloops = atoi(argv[2]);

	if (seed == -1) {
		seed = arc4random();
		printf("seed: %u\n", seed);
	}

	srand(seed);
	for (unsigned int j = 0; j < nloops; j++) {
		r =  rand();
		printf("%d\n", r);
	}*/

}


