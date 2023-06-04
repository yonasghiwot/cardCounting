#include <stdio.h>
#include <stdlib.h>

int main()
{
char cardName[3];
int count = 0;
  while(cardName[0]!='X'){
  /* evalutes the value of the card drawn*/
    puts("Enter the cardname: ");
    scanf("%2s", cardName);
    int val = 0;
    switch (cardName[0]){
        case'J':
        case'Q':
        case'K':
           val=10;
           break;
        case'A':
           val=11;
           break;
        case'X':
           continue; 
        default:
        val =atoi(cardName);
/* error handling */
        if(val<1 || val>10){
           puts("wrong value pls select a card again!");
           continue;
        }
    }

/* Check if the value is 3 to 6  and increament the count odds*/
/* Otherwise check if the card was 10, J, Q, or K */
     if((val>2) && (val<7)){
          count++;
     } else if(val==10){
	  count--; 
     }
     
     printf("The count is: %i\n",count);
  }
 return 0;
}
