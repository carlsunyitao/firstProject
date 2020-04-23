#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main(void)
{
    FILE *p1=NULL;
    FILE *p2=NULL;
    FILE *p3=NULL;
    FILE *p4=NULL;
    int i=0;
    
    p1 = fopen("/sys/class/gpio/export","w");
    fprintf(p1,"%d",32);
    fclose(p1);

    p2 = fopen("/sys/class/gpio/export","w");
    fprintf(p2,"%d",33);
    fclose(p2);

    p3 = fopen("/sys/class/gpio/export","w");
    fprintf(p3,"%d",34);
    fclose(p3);

    p4 = fopen("/sys/class/gpio/export","w");
    fprintf(p4,"%d",35);
    fclose(p4);

    p1 = fopen("/sys/class/gpio/gpio32/direction","w");
    fprintf(p1,"out");
    fclose(p1);

    p2 = fopen("/sys/class/gpio/gpio33/direction","w");
    fprintf(p2,"out");
    fclose(p2);

    p3 = fopen("/sys/class/gpio/gpio34/direction","w");
    fprintf(p3,"out");
    fclose(p3);

    /*
    p4 = fopen("/sys/class/gpio/gpio35/direction","w");
    fprintf(p4,"out");
    fclose(p4);
*/
    for( i=0; i<10; i++)
    {
        p1 = fopen("/sys/class/gpio/gpio32/value","w");
        fprintf(p1,"%d",1);
        sleep(1);
        fclose(p1);

        p2 = fopen("/sys/class/gpio/gpio33/value","w");
        fprintf(p2,"%d",1);
        sleep(1);
        fclose(p2);

        p3 = fopen("/sys/class/gpio/gpio34/value","w");
        fprintf(p3,"%d",1);
        sleep(1);
        fclose(p3);
/*
        p4 = fopen("/sys/class/gpio/gpio35/value","w");
        fprintf(p4,"%d",1);
        sleep(1);
        fclose(p4);
*/



        p1 = fopen("/sys/class/gpio/gpio32/value","w");
        fprintf(p1,"%d",0);
        sleep(1);
        fclose(p1);

        p2 = fopen("/sys/class/gpio/gpio33/value","w");
        fprintf(p2,"%d",0);
        sleep(1);
        fclose(p2);

        p3 = fopen("/sys/class/gpio/gpio34/value","w");
        fprintf(p3,"%d",0);
        sleep(1);
        fclose(p3);
/*
        p4 = fopen("/sys/class/gpio/gpio35/value","w");
        fprintf(p4,"%d",0);
        sleep(1);
        fclose(p4);
  */
    }

    p1 = fopen("/sys/class/gpio/unexport","w");
    fprintf(p1,"%d",32);
    fclose(p1);

    p2 = fopen("/sys/class/gpio/unexport","w");
    fprintf(p2,"%d",33);
    fclose(p2);

    p3 = fopen("/sys/class/gpio/unexport","w");
    fprintf(p3,"%d",34);
    fclose(p3);
/*
    p4 = fopen("/sys/class/gpio/unexport","w");
    fprintf(p4,"%d",35);
    fclose(p4);
*/
    return 0;
}
