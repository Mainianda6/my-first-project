
#include <stdio.h>
int main ()
    { 
        int x = 50; 
        float y = -16.7889; 
        double z = 8.78897889; 
        printf ("Value of x=%d, and value of y=%f.", x, y); 
        printf ("Value of x=%i, and value of y=%9.3f.", x, y); 
        printf ("Value of x=%3d, and value of y=%7.1f.", x, y); 
        printf ("Value of x=%3d, and value of y=%5.1f.", x, y); 
        printf ("Value of x=%5d, and value of y=%3.1f.", x, y); 
        printf ("Value of x=%d, and value of y=%.1f, and value of z=%lf", x, y, z); 
        printf ("Value of x=%d, and value of y=%.1f, and value of z=%11.8lf", x, y, z); 
        return 0;
    }