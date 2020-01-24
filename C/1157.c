#include <stdio.h>
int main() {
	char word[1000001];
	int alphabetCnt[26] = { 0, }; //배열 크기를 알파벳 개수로 맞추기 
	fgets(word, sizeof(word), stdin);

	for (int i = 0; word[i]!='\0'; i++) {
		if ('a' <= word[i])
			word[i] = word[i] - 32; //아스키코드 특징을 이용해서 대문자로 변경
		alphabetCnt[word[i]-'A']++; //이렇게 하면 0부터 들어가겠죠?
	}
	
	int max = 0; char c = '?';
	for (int alpha = 0; alpha <= 'Z'-'A'; alpha++) {
		if (alphabetCnt[alpha] > max) {
			max = alphabetCnt[alpha];
			c = alpha;
		}
        
		else if (alphabetCnt[alpha] == max) {
			c = '?';
		}
	}
	printf("%c", (c=='?')? '?': c+65);//인덱스를 0~25로 맞춰줬으니 출력할때는 다시 맞춰줘야해요
	return 0;
}