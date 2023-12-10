#include <cstring>
#include <iostream>

using namespace std;

#define TRUE 1
#define FALSE 0
#define RESIDENT_NUMBER_LENGTH 13

int availabilityCheck(char *resident_number);
int checkLengthCharacter(char *resident_number);
int checkDate(char *resident_number);
int checkIdentification(char *resident_number);
int checkGender(char *resident_number);
int checkYear(int year);

int main() {
  /* 테스트할 주민등록번호 저장 배열*/
  char resident_number[][20] = {
      "0402291000008", "870401102321",  "00031541949179", "0003154194917",
      "801203#201122", "7804155328845", "7804150328840",  "9612241068382",
      "99092194322",   "0230174326176", "8811391042219",  "8100122042213",
      "8112002042213", "9210101069415", "0802294012345",  "8806311069417",
      "8807311069418"};

  int i, count;
  count = sizeof(resident_number) / sizeof(resident_number[0]);

  for (i = 0; i < count; i++) {
    if (availabilityCheck(resident_number[i]) == TRUE) {
      printf("(+) 주민번호%s 는(은) 유효한 번호입니다.\n", resident_number[i]);
    } else {
      printf("(-) 주민번호%s 는(은) 유효하지 않은 번호입니다.\n",
             resident_number[i]);
    }
  }
  return 0;
}

int availabilityCheck(char *resident_number) {
  return (checkLengthCharacter(resident_number) == TRUE) &&
         (checkGender(resident_number) == TRUE) &&
         (checkDate(resident_number) == TRUE) &&
         (checkIdentification(resident_number) == TRUE);
}

int checkLengthCharacter(char *resident_number) {
  int ret = TRUE;

  if (strlen(resident_number) != RESIDENT_NUMBER_LENGTH) {
    ret = FALSE;
  }

  while (*resident_number != '\0') {
    if ((*resident_number < '0') || (*resident_number > '9')) {
      ret = FALSE;
    }
    resident_number++;
  }

  return ret;
}

int checkDate(char *resident_number) {
  char buf[5] = {'\0'};
  int ret = TRUE;

  int year = 0;
  int month = 0;
  int date = 0;

  memset(buf, '\0', 5);
  memcpy(buf, resident_number, 2);
  year = stoi(buf);

  if ((*(resident_number + 6) == '1') || (*(resident_number + 6) == '2')) {
    year += 1900;
  } else {
    year += 2000;
  }

  memset(buf, '\0', 5);
  memcpy(buf, resident_number + 2, 2);
  month = stoi(buf);

  memset(buf, '\0', 5);
  memcpy(buf, resident_number + 4, 2);
  date = stoi(buf);

  if (year > 2023) {
    ret = FALSE;
  }
  if ((month < 1) || (month > 12)) {
    ret = FALSE;
  }
  if (date < 1 || date > 31) {
    ret = FALSE;
  }
  if (((month == 4) || (month == 6) || (month == 9) || (month == 11)) &&
      (date > 30)) {
    ret = FALSE;
  }
  if ((month == 2) && (checkYear(year) == TRUE)) {
    if (date > 29) {
      ret = FALSE;
    }
  } else if ((month == 2) && (date > 28)) {
    ret = FALSE;
  }

  return ret;
}

int checkIdentification(char *resident_number) {
  int sum = 0;

  for (int i = 0; i < RESIDENT_NUMBER_LENGTH - 1; i++) {
    sum += (*(resident_number + i) - '0');
  }

  return ((*(resident_number + 12) - '0') == (sum % 10));
}

int checkGender(char *resident_number) {
  return (*(resident_number + 6) >= '1') && (*(resident_number + 6) <= '4');
}

int checkYear(int year) {
  int ret = FALSE;
  if (ret % 4 != 0) {
    ret = FALSE;
  } else if (ret % 100 != 0) {
    ret = TRUE;
  } else if (ret % 400 == 0) {
    ret = TRUE;
  } else {
    ret = FALSE;
  }
  return ret;
}
