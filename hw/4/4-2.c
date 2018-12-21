#include<stdio.h>
#include<string.h>

int main() {
	int i;
	char str[100];
	char ascii[127] = { 0, };
	printf("입력 문자열 : ");
	scanf_s("%s", str);

	for (i = 0; str[i]; i++) {
		ascii[str[i]]++;
	}

	for (i = 0; str[i]; i++) {
		if (ascii[str[i]] == 0) {
			continue;
		}
		else {
			printf("%c문자가 %d번 등장하였음!\n", str[i], ascii[str[i]]);
			ascii[str[i]] = 0;
		}
	}
	printf("\n");
	system("PAUSE");
}