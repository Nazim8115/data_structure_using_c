#include<stdio.h>
int main()
{
    int arr[10];
    int size=5;
    int i;
    int insert_array_size;
    int value;

    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("display array\n");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    
    printf("insert element\n");

    size++;
    printf("enter element : ");
    scanf("%d",&value);
    arr[size-1]=value;
        
    for(i=0;i<size;i++)
        printf("%d  ",arr[i]);
    return 0;
}