#include <stdio.h>
main(void)
{
	char good[] = "good";
	char* bad = "bad";

	good[0] = "H";
		//good = "newgood

		bad = "new bad";
		//bad[0] 's';

	printf("%s %s", good, bad);
	return 0;;
}