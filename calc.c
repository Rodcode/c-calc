#include <stdio.h>
#include <stdlib.h>

int sum_array(int arr[]); // TODO understand these declarations

int add(int numbers[])
{
    return sum_array(numbers);
}

int sum_array(int arr[])
{
   int i, sum=0;
   int n = sizeof(&arr)/sizeof(int) + 1; // TODO better understand the ampersand here

   for (i=0; i<n; i++)
   {
	 sum = sum + arr[i];
   }
   return(sum);
}

int main() //(int argc, char *argv[])
{
   printf("Let's Go!\n");

   // char *ptr;
   // printf("%ld", strtol(argv[1], &ptr, 10)); // TODO accept arguments, cast to integers

   int inputs[] = {2, 3, 4}; // TODO not global
   int answer = add(inputs);
   printf("2 + 3 + 4 = %d\n", answer);

   return 0;
}
