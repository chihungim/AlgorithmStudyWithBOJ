#pragma warning(disable:4996)

#include <stdio.h>
#include <time.h>

int main() {
    time_t time1;

    //time 함수(UTC) : 리턴값만 전달하여 변수에 조사된 시간을 입력하는 방법
    time1 = time(NULL);

    //gmtime 함수(UTC)
    tm* timeptr1;

    //localtime 함수(UTC + Local Time)
    timeptr1 = localtime(&time1);
    printf("%4d-%02d-%02d\n",
        timeptr1->tm_year + 1900,/*1990년 이후 경과년수이기 때문에 1990년을 더함*/
        timeptr1->tm_mon + 1,/*0월~11월이기 때문에 1을 더함*/
        timeptr1->tm_mday);


    return 0;
}
