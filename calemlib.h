#ifndef CALEM_LIB_H
#define CALEM_LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#include <unistd.h>


#define PI 3.1415926535897932384626433832795
#define MAX 1000


typedef struct {
    u_int32_t x;
    u_int32_t y;
} Pixel;


typedef struct {
    Pixel p1;
    Pixel p2;
} Line;


typedef struct {
    int8_t r;
    int8_t g;
    int8_t b;
    int8_t a;
}   Color;


int init_window(int x, int y, int width, int height, char *title);
int loop_window(void);

#endif