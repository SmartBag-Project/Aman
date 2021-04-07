#include <stdio.h>
#include <stdlib.h>
#include <gps.h>

int main(void) {
  
    gps_init();

    loc_t data;

    while (1) {
        gps_location(&data);

        printf("latitude: %lf \t longitude: %lf\n\n", data.latitude, data.longitude);
    }

    return EXIT_SUCCESS;
}

