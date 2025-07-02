// file: printf_coords.c
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct coordinate {
    double lat;
    double lon;
};

void print_array(void *arr,size_t nelems,int width,void(*pr_func)(void *))
{
    for (int i=0; i < nelems; i++) {
        void *element = (char *)arr + i * width;
        pr_func(element);
    }
}

void print_coord(void *arr)
{
    struct coordinate *coord = (struct coordinate *)arr;
    int lat_deg = (int)coord->lat;
    double lat_minsec = fabs((coord->lat - lat_deg) * 60.0);
    int lat_min = (int)lat_minsec;
    double lat_sec = (lat_minsec - lat_min)* 60.0;

    int lon_deg = (int)coord->lon;
    double lon_minsec = fabs((coord->lon - lon_deg) * 60.0);
    int lon_min = (int)lon_minsec;
    double lon_sec = (lon_minsec - lon_min)* 60.0;

    printf("%f Latitude, %f Longitude =\n",coord->lat,coord->lon);
    printf("Latitude: %d deg %d min %f sec\n",lat_deg,lat_min,lat_sec);
    printf("Longitude: %d deg %d min %f sec\n\n",lon_deg,lon_min,lon_sec);
}

int main(int argc, char **argv)
{
    struct coordinate coords[] = {{37.4301566,-122.1756849},
                                  {38.8975062,-77.0388237},
                                  {-82.8627513,134.9978113},
                                  {51.5287718,-0.2416818}
                                 };
    size_t coords_nelems = sizeof(coords) / sizeof(coords[0]);

    print_array(coords,coords_nelems,sizeof(coords[0]),print_coord);

    return 0;
}
