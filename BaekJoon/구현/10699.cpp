#pragma warning(disable:4996)

#include <stdio.h>
#include <time.h>

int main() {
    time_t time1;

    //time �Լ�(UTC) : ���ϰ��� �����Ͽ� ������ ����� �ð��� �Է��ϴ� ���
    time1 = time(NULL);

    //gmtime �Լ�(UTC)
    tm* timeptr1;

    //localtime �Լ�(UTC + Local Time)
    timeptr1 = localtime(&time1);
    printf("%4d-%02d-%02d\n",
        timeptr1->tm_year + 1900,/*1990�� ���� �������̱� ������ 1990���� ����*/
        timeptr1->tm_mon + 1,/*0��~11���̱� ������ 1�� ����*/
        timeptr1->tm_mday);


    return 0;
}
