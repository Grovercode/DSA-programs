#include <stdio.h> #include <math.h>

struct Point
{
int x; int y;
}p1,p2,p3,p4;

void main()
{
int dist1,dist2,sum;
printf("Enter the first point(x1,y1)\n"); scanf("%d,%d",&p1.x,&p1.y); printf("Enter the second point(x2,y2)\n"); scanf("%d,%d",&p2.x,&p2.y);
dist1 = sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y)); printf("Distances between point 1 and point 2 is : %d \n\n",dist1); printf("Enter the third point(x3,y3)\n"); scanf("%d,%d",&p4.x,&p4.y);
printf("Enter the fourth point(x4,y4)\n"); scanf("%d,%d",&p3.x,&p4.y);
dist2 = sqrt((p4.x-p3.x)*(p4.x-p3.x)+(p4.y-p3.y)*(p4.y-p3.y)); printf("Distances between point 3 and point 4 is : %d \n",dist2); sum = dist1 + dist2;
printf("\nSum of the distances is : %d ",sum);
}
