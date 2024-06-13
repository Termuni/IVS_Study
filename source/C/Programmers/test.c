#include <stdio.h>

#define CIRCLE 0
#define RECTANGLE 1
#define TRIANGLE 2

typedef struct _Circle {
    int r;
} Circle, *PCircle;

typedef struct _Rectangle {
    int width;
    int height;
} Rectangle, *PRectangle;

typedef struct _Triangle {
    int base;
    int height;
} Triangle, *PTriangle;


// Functions for getting area of circle, rectangle and triangle
// $ANNOTATION_1

float get_area_of_circle(Circle * circle){
  return (3.14 * circle->r * circle->r);
}
float get_area_of_rectangle(Rectangle * rect){
  return (rect->width * rect->height);
}
float get_area_of_triangle(Triangle * tri){
  return (tri->base * tri->height / 2);
}

// Function for getting area according to shape
// $ANNOTATION_1
float get_area_of_shape(int shape, void * data){
  if(shape == CIRCLE){
    return get_area_of_circle(&data);
  }
  else if(shape == TRIANGLE){
    return get_area_of_triangle(&data);
  }
  else if(shape == RECTANGLE){
    return get_area_of_rectangle(&data);
  }
  return -1;
}


// $ANNOTATION_2
int main() {
    // Sample input
    int shape = TRIANGLE;
    Triangle data = {7, 5};

    float area;
    
    // Getting area according to shape using only a function   
    area = get_area_of_shape(shape, (void *)&data);

    printf("Area of Shape: %.2f\n", area);
 
    return 0;
}