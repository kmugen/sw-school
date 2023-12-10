#include <iostream>

#define MAX_LEN 20

using namespace std;

void inputStrings(char (*ary)[MAX_LEN], int n);
void swap(char *s1, char *s2);
void bubbleSort(char (*ary)[MAX_LEN], int n);
void printStrings(const char (*ary)[MAX_LEN], int n);

int main(void) {
  char ary[5][MAX_LEN] = {'\0'};
  inputStrings(ary, sizeof(ary) / sizeof(ary[0]));
  bubbleSort(ary, sizeof(ary) / sizeof(ary[0]));
  printStrings(ary, sizeof(ary) / sizeof(ary[0]));
}

void inputStrings(char (*ary)[MAX_LEN], int n) {
  char temp[20] = {'\0'};

  for (int i = 0; i < n; i++) {
    memset(temp, '\0', MAX_LEN);

    cout << i + 1 << "번 문자열을 입력하시오 : ";
    cin >> temp;
    memcpy(ary[i], temp, MAX_LEN);
  }
}

void swap(char *s1, char *s2) {
  char temp[MAX_LEN] = {'\0'};
  
  memcpy(temp, s1, MAX_LEN);
  memcpy(s1, s2, MAX_LEN);
  memcpy(s2, temp, MAX_LEN);
}

void bubbleSort(char (*ary)[MAX_LEN], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (strcmp(ary[i], ary[j]) > 0) {
        swap(ary[i], ary[j]);
      } else {
        ;
      }
    }
  }
}

void printStrings(const char (*ary)[MAX_LEN], int n) {
  for (int i = 0; i < n; i++) {
    cout << "str[" << i << "] = " << ary[i] << "  " << ary[i][0] << "  "
         << ary[i][strlen(ary[i]) - 1] << '\n';
  }
}