#include <stdio.h>

int main() {
    int wind_speed;
    
    
    printf("What is the wind speed in mph: ");
    scanf("%d", &wind_speed);
    
    
    if (wind_speed >= 157) {
        printf("Category Five Hurricane\n");
    } else if (wind_speed >= 130) {
        printf("Category Four Hurricane\n");
    } else if (wind_speed >= 111) {
        printf("Category Three Hurricane\n");
    } else if (wind_speed >= 96) {
        printf("Category Two Hurricane\n");
    } else if (wind_speed >= 74) {
        printf("Category One Hurricane\n");
    } else {
        printf("Not a Hurricane\n");
    }
    
    return 0;
}