#include <stdio.h>
#include <unistd.h>

int main() {
	int interval = 5;
	int i = 0;
	while (1 == 1) {
		printf("log message %d, sleeping %d seconds.\n", i, interval);
		fflush(stdout);
		i += 1;
		sleep(interval);
	}
}
