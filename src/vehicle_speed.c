
#include <stdio.h>

#define SPEED_LIMIT 120

int main(void)
{
    int vehicle_speed;

    printf("Enter vehicle speed (km/h): ");
    if (scanf("%d", &vehicle_speed) != 1)
    {
        printf("Invalid speed input.\n");
        return 1;
    }

    printf("Vehicle Speed: %d km/h\n", vehicle_speed);

    if (vehicle_speed > SPEED_LIMIT)
    {
        printf("WARNING: Speed limit exceeded!\n");
    }
    else if (vehicle_speed == SPEED_LIMIT)
    {
        printf("Speed is at the limit.\n");
    }
    else
    {
        printf("Vehicle speed is within the limit.\n");
    }

    return 0;
}