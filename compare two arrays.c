#include<stdio.h>
void read_array(int a[],int size)
{
    int i;
    printf("\n Enter elements are: ");
    for(i=0;i<size;i++)
    {
        printf("array[%d] = ",i);
        scanf("%d",&a[i]);
    }
    return 0;
       
       
}
void display(int a[],int size)
{
    int i;
    printf("\n Elements are : ");
    for(i=0;i<size;i++)
    {
        printf("\n array[%d] = %d",i,a[i]);
    }
}

int check(int a1[],int a2[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(a1[i] != a2[i])
        {
            return 0;
        }
    }
    return 1;
}
void main()
{
    
    int a1[10],a2[10];
    read_array(a1,5);
    read_array(a2,5);
    if(check(a1,a2,5) == 1)
    {
        printf("\n Arrays have same elements");
        display(a2,5);
    }else{
        printf("\n Arrays have different elements.");
        display(a2,5);
    }
}
