#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hour, minute;
	scanf("%d:%d", &hour, &minute);
	float AngleHour = hour % 12 * 30 + minute % 60 * 0.5;
	float AngleMinute = minute * 6;
	float angle = AngleHour - AngleMinute > 0 ? AngleHour - AngleMinute : AngleMinute - AngleHour;
	angle = angle > 180 ? 360 - angle : angle;
	printf("%.3f\n", angle);
	return 0;
}