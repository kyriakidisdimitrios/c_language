// #include <stdio.h>
// #include <stdlib.h>
//
// typedef struct point {
//     int x;
//     int y;
// }Point;
//
// int main() {
//     //creating a "static array of points"
//     Point pointsArray[5];
//     int i;
//
//     //writing input to the first point element in the array
//     // printf("Enter a first point 'x' coordinate: ");
//     // scanf("%d", &pointsArray[0].x);
//     // printf("Enter a first point 'y' coordinate: ");
//     // scanf("%d", &pointsArray[0].y);
//
//     //iterating over all of the point arrat (and reading input into each of them)
//     for(i=0;i<5;i++) {
//         printf("Enter point #%d 'x' coordinate: ", i+1);
//         scanf("%d", &pointsArray[i].x);
//         printf("Enter point #%d 'y' coordinate: ", i+1);
//         scanf("%d", &pointsArray[i].y);
//     }
//
//     //accessing and printing all the values of each of the "static array of points"
//     for(i=0;i<5;i++) {
//         printf("Point #%d = (%d,%d)\n", i+1, pointsArray[i].x, &pointsArray[i].y);
//     }
//
// }