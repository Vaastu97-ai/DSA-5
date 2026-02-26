#include<stdio.h>
#include<limits.h>

int main()
{
    int a[10];
    int large = INT_MIN;
    int second = INT_MIN;
    int i , n;
    int compare =0;
    printf("Enter the number of the array:");
    scanf("%i",&n);
    
    if(n < 2)
       return 0;
      
 printf("Enter the array elements:");
    for( i=0 ; i<n; i++){
       scanf("%i" , &a[i]);
        compare++;
              if(a[i] > large)
            {
               second = large;
               large = a[i];
              
             }

             else if(a[i] < large && a[i] > second)
            {
               second = a[i];
            }
}
          if(second == INT_MIN)
           {
            printf("ERROR");
           
           }
            else
            {
            printf("the Second large element is :%i" , second);
            printf("The number of Comparision is :%i", compare);
            }
     
return 0;
}