1. Build it

In order to obtain "libgps.a"

$ make
$ sudo make install

This project abstracts all datas and replies in:

 -> Decimal Degrees for latitudes and logitudes (43.012760 , 79.243610)

2. demo 

Create a simple `demo.c` file (you can find all in the main folder)

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


3. Compile it


$ gcc -o latlong demo.c -lgps -lm


4. Run it


$ ./latlong


You will see your data directly in console:

43.012760 79.243610
43.012755 79.243609
43.012735 79.243620
43.012767 79.243615
43.012756 79.243602
43.012778 79.243613
43.012765 79.243630
43.012737 79.243621
43.012739 79.243607




