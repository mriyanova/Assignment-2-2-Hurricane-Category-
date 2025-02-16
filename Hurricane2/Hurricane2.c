#include <stdio.h>

//This function is for the user input
void getWindSpeed(int *wind_speed) {
    printf("What is the wind speed in mph: ");
    scanf("%d", wind_speed);
}

// This funtion determines the hurricane category
void determineHurricaneCategory(int wind_speed) {
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
}

// This function displays the results 
int main() {
    int wind_speed;
    
    getWindSpeed(&wind_speed);
    determineHurricaneCategory(wind_speed);
    
    return 0;
}
