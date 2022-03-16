#include<stdio.h>
int main()
{
    int A[30],i;
    int size;
    int pos,item;
    int k;
    printf("how much element you want in array: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
        scanf("%d",&A[i]);
    printf("\ndispaly initial array\n");
    for(i=0;i<size;i++)
        printf("%d ",A[i]);
    printf("insert new element\nenter postion and item: ");
    scanf("%d%d",&pos,&item);
    
    if((size-1)==30)
        printf("array is full");
    else
    {
        for(k=size-1;k>=pos;k--)
            {
                A[k+1]=A[k];
            }
        A[pos]=item;
        size++;

    }
    printf("\ndisplay array after insert the element:  ");
    for(i=0;i<size;i++)
        printf("%d  ",A[i]);

    

    return 0;
}