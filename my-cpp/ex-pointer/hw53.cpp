#include <cstring>
#include <iostream>

using namespace std;

// s의 원본 데이터를 입력값으로 바꿔야 하므로 char *
void inputStr(char *s);
// s의 원본 데이터를 바꿀 일이 없으므로 const char *
int getNumbers(const char *s);
void printSum(const char *s, int n);

int main(void) {
  char str[100] = {'\0'};
  int numbers = 0;

  while (true) {
    inputStr(str);

    // end 입력 시 종료
    if (strcmp(str, "end") == 0) {
      break;
    }

    numbers = getNumbers(str);
    printSum(str, numbers);
  }
  return 0;
}

void inputStr(char *s) {
  char temp[100];
  cout << "문장을 입력하시오 : ";
  cin >> temp;
  strcpy(s, temp);
}

int getNumbers(const char *s) {
  char buf[100] = {'\0'};
  int index = 0;
  int ret = 0;

  // 문자열이 끝날 때까지 반복
  while (*s != '\0') {
    // 숫자라면 버퍼에 저장
    if (*s >= '0' && *s <= '9') {
      buf[index] = *s;
      cout << buf << endl;
      index++;
    }
    // 숫자가 아니라면 버퍼를 숫자로 변환
    // 버퍼와 인덱스 초기화
    else if (index > 0) {
      buf[index] = '\0';
      ret += stoi(buf);
      memset(buf, '\0', 100);
      index = 0;
    }
    // 버퍼가 비어있을 경우 무시
    else {
      ;
    }
    s++;
  }

  // 버퍼에 변환되지 않은 문자가 남아있을 경우
  if (index > 0) {
    ret += stoi(buf);
  }

  return ret;
}

void printSum(const char *s, int n) {
  cout << '\"' << s << "\" 내의 총 숫자는 [" << n << "]입니다.\n";
}