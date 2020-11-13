#include <stdio.h>
#include <stdlib.h>

int main()
{
   int list [20] , i , m  , n , z, check;

    printf( "enter your numbers \n" );

    z=0;

    for(i=0;i<20 ; i++)
    {

         check=1;
        scanf("%d", &n);

        for(m=0; m<i;m++){
            if (list[m]==n)
            check=0;
        }
        if (check==1)
          {

           list[z]=n;
            z++;




          }






     }


printf("enterd numbers is \n ");
    sum(list,z);


}
int sum(int list[]  , int z ){
 int i;
  int sum = 0;

for (i = 0; i < z; i++) {
  printf("%d\n ",list[i]);
 sum = list[i]+sum;
}
printf("value of sum is:");
  printf("%d" , sum);

  return 0;
}
