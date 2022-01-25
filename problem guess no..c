#include<stdio.h>

int main()
{
   int i,num=64,yourGuess,guess,count=0;

   printf("guess the number randomly here are some clues later\n");
   scanf("%d",&guess);

   do {
      if(num==guess) {
         yourGuess=0;
      } else if(guess<num) {
        yourGuess=1;
         printf("Your guess is lower than the number\n");
         count++;
      } else {
         yourGuess=1;
         printf("Your guess is greater than the number\n");
         count++;
      }
      if(yourGuess==1) {
         printf("sorry wrong enter! once again try it\n");
         scanf("%d",&guess);
      }
   } while(yourGuess=0);
   printf("Congratulations! You guessed the correct number %d\n",num);
   printf("Total number of trails you attempted for guessing is: %d\n",count);
}
