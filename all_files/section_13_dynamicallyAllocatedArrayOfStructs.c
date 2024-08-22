// #include <stdio.h>
// #include <stdlib.h>
//
// //Lesson: Dynamically allocated array of structs
// typedef struct point {
//     int x;
//     int y;
// }Point;
//
// int main() {
//     Point* pointsArr;
//     int totalPoints;
//     int i;
//
//     printf("Enter the total number of points: ");
//     scanf("%d", &totalPoints);
//
//     //making the dynamic memory allocated (at run time..)
//     pointsArr = (Point*)malloc(sizeof(Point) * totalPoints); //it is an array of Points
//
//     //iterating over all of the point arrat (and reading input into each of them)
//     for(i=0;i<5;i++) {
//         printf("Enter point #%d 'x' coordinate: ", i+1);
//         scanf("%d", &pointsArr[i].x);
//         printf("Enter point #%d 'y' coordinate: ", i+1);
//         scanf("%d", &pointsArr[i].y);
//     }
//
//     //accessing and printing all the values of each of the "static array of points"
//     for(i=0;i<5;i++) {
//         printf("Point #%d = (%d,%d)\n", i+1, pointsArr[i].x, &pointsArr[i].y);
//     }
//
// }