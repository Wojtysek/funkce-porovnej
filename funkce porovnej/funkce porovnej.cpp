#include <stdio.h>

int porovnej(char* x, char* y) {
	unsigned long long delsi = strlen(x);
	unsigned long long kratsi = strlen(y);
	//v promene delsi -> delka delsiho retezce
	if (kratsi > delsi) delsi = kratsi;

	for (unsigned long long i = 0; i <= delsi; i++) {

	}

	return 0;
}

int main(void) {

	char jedna[] = "zdarec";
	char dva[] = "nazdar";
	if (porovnej(jedna, dva) == 0) {
		printf("retezce jsou stejne\n");
	}
	else {
		printf("retezce nejsou stejne\n");
	}
}