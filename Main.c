/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

struct node
{
    char info[100];
    struct node *left;
    struct node *right;
};
typedef struct node *NODE;


NODE create(NODE);
NODE create1(NODE);
NODE create2(NODE);
int main()
{
    NODE root=NULL;

    int choice;
    printf("\n\tEnter 1 for displaying about INDIA and 2 for EXIT\n\t");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:root=malloc(sizeof(NODE));
                create(root);
                break;

        case 2:printf("\n\t\t**********");
               printf("\n\t\tTHANK YOU\n");
               printf("\n\t\t**********\n");
               exit(0);


        default:
            printf("\n Enter the correct choice\n");
                   break;
    }
    return 0;
}

NODE create(NODE root)
{
    NODE state;
    NODE ut;
    int key;
    if(root!=NULL)
    {
       strcpy(root->info,"INDIA");
        printf("\n\tClick 1 for STATES and 2 for UNION-TERRITORIES of %s\n\t",root->info);

	scanf("%d",&key);
        if(key==1)
        {
            state=malloc(sizeof(NODE));
            root->left=state;
            create1(state);
        }
        else if(key==2)
        {
            ut=malloc(sizeof(NODE));
            root->right=ut;
            create2(ut);
        }
        else
        {
 printf("\n\t wrong choice\n");
  exit(0);
        }
    }
    return 0;
}

NODE create1(NODE state)
{
    int item;
    if (state!=NULL)
    {
        strcpy(state->info,"STATES");
        printf("\n\t Click 1 for NORTH INDIAN and 2 for SOUTH INDIAN %s\n\t",state->info);

	scanf("%d",&item);
        if(item==1)
        {
            printf("\n\t\tThere are 29 states in INDIA\n\t\t We have classified them into: NORTH and SOUTH INDIA\n");
            printf("\n\t\tThere are 22 states in North INDIA\n\t\tClassified into NORTH EAST and NORTH WEST\n");
            printf("\n\t\t=> NORTH EAST STATES:\n\t\t\t1.Arunachal pradesh\t\t2.Assam\n\t\t\t3.Manipur\t\t\t4.Meghalaya\n\t\t\t5.Mizoram\t\t\t6.Nagaland\n\t\t\t7.Sikkim\t\t\t8.Tripura\n\t\t\t9.Bihar\t\t\t\t10.Jharkhand\n\t\t\t11.Odissa\t\t\t12.West bengal");
            printf("\n\t\t=> NORTH WEST STATES:\n\t\t\t1.Jammu and Kashmir\t\t2.Himachal pradesh\n\t\t\t3.Haryana\t\t\t4.Uttar pradesh\n\t\t\t5.Punjab\t\t\t6.Uttarakhand\n\t\t\t7.Madhya pradesh\t\t8.Rajasthan\n\t\t\t9.Gujarat\t\t\t10.Chhattisgarh\n\n\n");
        }
        else if(item==2)
        {
            printf("\n\t\tThere are 29 states in INDIA\n\t\tWe have classified them into: NORTH and SOUTH INDIA\n");
            printf("\n\t\tIn which there are a total of 7 states in SOUTH INDIA ");
            printf("\n\t\t=> SOUTH INDIAN STATES:\n\t\t\t1.Andhra pradesh\t\t2.Goa\n\t\t\t3.Karnataka\t\t\t4.Kerala\n\t\t\t5.Maharashtra\t\t\t6.Tamil Nadu\n\t\t\t7.Telangana\n\n\n");
          }
        else
        {
            printf("\n wrong choice\n");
        }

    }
    return 0;
}


NODE create2(NODE ut)
{
	strcpy(ut->info,"UNION");
printf("\n\t\t There are 7 %s-TERRITORIES\n",ut->info);
printf("\n\t\t=> UNION TERRITORIES:\n\t\t\t1.Andaman and Nicobar Island\n\t\t\t2.Chandigarh\n\t\t\t3.Dadra and Nagar Haveli\n\t\t\t4.Daman and Diu\n\t\t\t5.Delhi\n\t\t\t6.Lakshadweep\n\t\t\t7.Puducherry\n\n\n");

return 0;
}
