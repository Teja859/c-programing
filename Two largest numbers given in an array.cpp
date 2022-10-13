#include <stdio.h>
int main()
{
    int size;
    int i;
    int largest = -1;
    int secondLargest = -1;
    printf(" Enter number of elements  : ");
    scanf("%d",&size);
    int array[size];
    for(i=0; i < size; i++){
        printf("Enter : ");
        scanf("%d", &array[i]);
    }
    for(i=0; i<size; i++){
      if(array[i] > largest){
        secondLargest = largest;
        largest = array[i];
      }else if(array[i] > secondLargest){
        secondLargest = array[i];
      }
    }
    printf("First largest number is %d\n",largest);
    printf("Second largest number is %d\n",secondLargest);
}
