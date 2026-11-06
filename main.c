#include <stdio.h>

#define MAX_REQUESTS 10

typedef struct
{
    int currentFloor;
    int requests[MAX_REQUESTS];
    int requestCount;
} Elevator;

void moveToFloor(Elevator *lift, int targetFloor)
{
    printf("\nProcessing request for floor %d...\n",
           targetFloor);

    while (lift->currentFloor != targetFloor)
    {
        if (lift->currentFloor < targetFloor)
        {
            lift->currentFloor++;
            printf("Moving up to floor %d\n",
                   lift->currentFloor);
        }
        else
        {
            lift->currentFloor--;
            printf("Moving down to floor %d\n",
                   lift->currentFloor);
        }
    }

    printf("Arrived at floor %d\n",
           lift->currentFloor);
    printf("Doors opening...\n");
    printf("Doors closing...\n");
}

void processRequests(Elevator *lift)
{
    if (lift->requestCount == 0)
    {
        printf("\nNo requests in queue.\n");
        return;
    }

    printf("\n=== Processing Queue ===\n");

    for (int i = 0; i < lift->requestCount; i++)
    {
        moveToFloor(lift, lift->requests[i]);
    }

    lift->requestCount = 0;

    printf("\nAll requests completed.\n");
}

void displayQueue(Elevator *lift)
{
    printf("\nCurrent Queue: ");

    if (lift->requestCount == 0)
    {
        printf("Empty\n");
        return;
    }

    for (int i = 0; i < lift->requestCount; i++)
    {
        printf("%d ", lift->requests[i]);
    }

    printf("\n");
}

int main()
{
    Elevator lift;

    lift.currentFloor = 1;
    lift.requestCount = 0;

    int choice;
    int floor;

    while (1)
    {
        printf("\n====================\n");
        printf("Elevator Simulator\n");
        printf("====================\n");
        printf("Current Floor: %d\n",
               lift.currentFloor);

        printf("\n1. Add Floor Request\n");
        printf("2. View Queue\n");
        printf("3. Process Queue\n");
        printf("4. Exit\n");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:

                if (lift.requestCount >= MAX_REQUESTS)
                {
                    printf("Queue is full.\n");
                    break;
                }

                printf("Enter floor number (1-10): ");
                scanf("%d", &floor);

                if (floor < 1 || floor > 10)
                {
                    printf("Invalid floor.\n");
                    break;
                }

                lift.requests[lift.requestCount] = floor;
                lift.requestCount++;

                printf("Floor %d added to queue.\n",
                       floor);

                break;

            case 2:

                displayQueue(&lift);
                break;

            case 3:

                processRequests(&lift);
                break;

            case 4:

                printf("Goodbye.\n");
                return 0;

            default:

                printf("Invalid option.\n");
        }
    }

    return 0;
}
