#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

// The single real purpose for mult is to have a compute
// intensive program that runs for a long time.

int
main(int argc, char *argv[])
{
  int i;
  int j;
  uint max = MAXINT;
  uint sum = 1;

  if (argc > 1) {
    // change the upper bound on the iteration loops.
    max = atoi(argv[1]);
  }
  printf(1, "mult begin: pid = %d     max = %d\n", getpid(), max);

#ifdef LOTTERY

  for(long x = 0, z = 0; x < max; ++x) {
	  for (long y = 0; y <   40000; ++y) {
		  z = z + 3.14 / 89.64;
		  //if ((x % (y + 1)) == (z + 17)) {
		  if (x == 1000000000) {
			  printf(1, "\tmult going: pid = %d\n", getpid());
		  }
	  }
  }
  
#else // LOTTERY
  
  for (j = 0; j < max; j++) {
    for(i = 1; i < max; i++) {
      sum ++;
      if ((sum % (MAXSHORT * MAXSHORT)) == 0) {
        printf(1, "  mult: %d  %u\n", getpid(), sum);
      }
      if (sum > (MAXINT / 2)) {
        sum = 0;
      }
    }
  }
#endif // LOTTERY
  
  printf(1, "mult done: pid = %d\n", getpid());

  // in xv6, exit() for not take a parameter.
  exit();
}
