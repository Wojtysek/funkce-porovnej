#include <stdio.h>

int porovnej(char* x, char* y) {
	unsigned long long delsi = delka(x);
	unsigned long long kratsi = delka(y);
	//v promene delsi -> delka delsiho retezce
	if (kratsi > delsi) delsi = kratsi;

	for (unsigned long long i = 0; i <= delsi; i++) {
		if (*(x + i) != *(y + i)) return 1; //nejsou-li shodne -> koncime
	}
	//jsou shodne
	return 0;
}

int delka(char* x) {
	unsigned long long i = 0;
	while (*(x + i) != '\0') i++;
	return i;
}


int main(void) {

	char jedna[] = "zdarec";
	char dva[] = "zdarec";
	if (porovnej(jedna, dva) == 0) {
		printf("retezce jsou stejne\n");
	}
	else {
		printf("retezce nejsou stejne\n");
	}
}