
#include <stdio.h>

int main() {

    int angle1, angle2;

    printf("Enter the first angle: ");
    scanf("%d", &angle1);

    printf("Enter the second angle: ");
    scanf("%d", &angle2);

    if (angle1 + angle2 == 90) {
        printf("The triangle is right-angled\n");
    }
    else {
        printf("The triangle is not right-angled\n");
    }

    return 0;
}
