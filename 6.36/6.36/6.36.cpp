#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
	int length = strlen(str);
	int start = 0;
	int end = length - 1;

	while (start < end) {
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

int main() {

	char inputString[100];

	printf("�п�J�@�Ӧr��: ");

	fgets(inputString, sizeof(inputString), stdin);
	
	inputString[strcspn(inputString, "\n")] = '\0';

	reverseString(inputString);

	printf("����᪺�r��: %s\n", inputString);

	return 0;
}