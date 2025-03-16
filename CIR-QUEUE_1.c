#include <stdio.h>
int cout = 0;
void ENQUEUE(int CQUEUE[], int MS, int *FRONT, int *REAR)
{
    int ele;
    if ((*REAR > -1) && (*FRONT == (*REAR + 1) % MS))
    {
        printf("\n");
        printf("CIR-QUEUE OVERFLOW\n");
        printf("---------------------------------------");
        printf("\n\n");
    }
    else
    {

        printf("ENTER ELEMENT TO INSERT : ");
        scanf("%d", &ele);
        printf("\n");

        *REAR = ((*REAR) + 1) % MS;
        CQUEUE[*REAR] = ele;

        printf("%d HAS BEEN INSERTED INTO THE CIR-QUEUE\n", CQUEUE[*REAR]);
        cout++;

        printf("---------------------------------------");
        printf("\n\n");
    }
}

void DEQUEUE(int CQUEUE[], int MS, int *FRONT, int *REAR)
{
    printf("");

    if ((*FRONT == 0) && (*REAR == -1))
    {
        printf("CIR-QUEUE UNDERFLOW\n");
        printf("---------------------------------------");
        printf("\n\n");
    }
    else
    {
        printf("%d HAS BEEN REMOVED FROM CIR-QUEUE\n", CQUEUE[*FRONT]);

        *FRONT = ((*FRONT) + 1) % MS;

        if ((*FRONT) == (*REAR + 1) % MS)
        {

            *FRONT = 0;
            *REAR = -1;
        }
        cout--;
        printf("---------------------------------------");
        printf("\n\n");
    }
}

void DISPLAY(int CQUEUE[], int MS, int *FRONT, int *REAR)
{
    int i;
    int temp = (*FRONT);
    if (cout == 0)
    {

        printf("CIR-QUEUE IS EMPTY, NOTHING TO DISPLAY\n");
        printf("---------------------------------------");
        printf("\n\n");
    }
    else
    {

        printf("ELEMENTS ARE : \n");

        for (i = 0; i < cout; i++)
        {
            printf("%d\t", CQUEUE[temp]);
            temp = ((temp) + 1) % MS;
        }
        printf("\n");
        printf("---------------------------------------");
        printf("\n");
    }
}

int main()
{
    int MS = 10;
    int CQUEUE[MS];
    int FRONT = 0, REAR = -1;
    int ch, EXIT = 1;

    do
    {
        printf("1 - ENQUEUE\n");
        printf("2 - DEQUEUE\n");
        printf("3 - DISPLAY\n");
        printf("4 - EXIT\n\n");
        printf("PROVIDE YOUR CHOICE : ");
        scanf("%d", &ch);

        switch (ch)
        {

        case 1: // ENQUEUQ

            ENQUEUE(CQUEUE, MS, &FRONT, &REAR);

            break;

        case 2: // DEQUEUE

            DEQUEUE(CQUEUE, MS, &FRONT, &REAR);

            break;

        case 3: // DISPLAY

            DISPLAY(CQUEUE, MS, &FRONT, &REAR);

            break;

        case 4: // EXIT

            EXIT = 0;

            break;

        default: // FOR INVALID CHOICE

            break;
        }
    } while (EXIT);

    return 0;
}