#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main() {
    float x1, y1, x2, y2;
    int choice;

    printf("Enter Point 1 (x1 y1): "); scanf("%f %f", &x1, &y1);
    printf("Enter Point 2 (x2 y2): "); scanf("%f %f", &x2, &y2);

    while(1) {
        printf("\n1. Distance\n2. Slope\n3. Check Quadrant\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Distance: %.2f\n", sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)));
                break;
            case 2:
                if(x2 - x1 != 0)
                    printf("Slope: %.2f\n", (y2 - y1) / (x2 - x1));
                else
                    printf("Slope is undefined (vertical line)\n");
                break;
            case 3:
                // Simple logic: if x,y signs match, same quadrant (simplified)
                if((x1>0 && x2>0 && y1>0 && y2>0) || (x1<0 && x2<0 && y1>0 && y2>0) ||
                   (x1<0 && x2<0 && y1<0 && y2<0) || (x1>0 && x2>0 && y1<0 && y2<0))
                    printf("Points lie in the same quadrant.\n");
                else
                    printf("Points are in different quadrants.\n");
                break;
            case 4: exit(0);
        }
    }
}
