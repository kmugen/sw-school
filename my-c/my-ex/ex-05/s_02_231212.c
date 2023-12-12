#include <stdio.h>

// 점수(정수 값)를 받아 학점으로 변환하여 반환하는 함수를 선언합니다.
// 점수에 따른 학점은 다음과 같습니다. 
//
//  60점 미만 	: 'F'
//  60 ~ 69 	: 'D'
//  70 ~ 79	: 'C'
//  80 ~ 89 	: 'B'
//  90 ~ 100	: 'A'
char scoreToGrade(int score);

int main() {

    int jumsu = 0;
    printf("점수 입력 : ");

    if (scanf("%d", &jumsu) == 1) {

        // 여기에서 점수를 학점으로 변환하는 함수를 호출합니다.
        // 점수와 학점을 출력합니다.
    	printf("%d %c\n", jumsu, scoreToGrade(jumsu));
    } else {
        printf("잘못 입력하였습니다.\n");
    }

    printf("프로그램을 종료합니다.\n");
    return 0;
}

// 정수 값을 하나 전달받아 학점으로 변환하여 반환하는 함수를 정의합니다.
char scoreToGrade(int score) {
	char ret = '\0';

	switch(score / 10) {
	case 10:
		ret = 'A';
		break;
	case 9:
		ret = 'A';
		break;
	case 8:
		ret = 'B';
		break;
	case 7:
		ret = 'C';
		break;
	case 6:
		ret = 'D';
		break;
	default:
		ret = 'F';
		break;
	}

	return ret;
}