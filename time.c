#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct Time t;

    printf("Enter hours: ");
    scanf("%d", &t.hours);

    printf("Enter minutes: ");
    scanf("%d", &t.minutes);

    printf("Enter seconds: ");
    scanf("%d", &t.seconds);

    int total = t.hours * 3600 + t.minutes * 60 + t.seconds;

    printf("Total seconds: %d\n", total);

    return 0;
}
