// Program to Sort the List According to the Second Element in Sublist
#include <stdio.h>
#include <string.h>
struct list
{                  // Structure declaration
    int num;       // Member (int variable)
    char name[20]; // Member (char variable)
};

int main()
{
    struct list l1[100];
    int n, tno;
    char tname[60];

    printf("\nEnter the Size of List :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Name :");
        scanf("%s", l1[i].name);
        printf("Enter Numb :");
        scanf("%d", &l1[i].num);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (l1[i].num > l1[j].num)
            {
                sprintf(tname, "%s", l1[i].name);
                sprintf(l1[i].name, "%s", l1[j].name);
                sprintf(l1[j].name, "%s", tname);

                tno = l1[i].num;
                l1[i].num = l1[j].num;
                l1[j].num = tno;
            }
        }
    }
    printf("\n List :\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n[%s - %d]", l1[i].name, l1[i].num);
    }

    return 0;
}