#include <stdio.h>
#include <stdlib.h>

int main()
{
char cardName[3];
printf("Enter the card name: ");
scanf("%2s", cardName);
int val = 0;
int lowcard=0;
int highcard=0;
/* Check if the value is 3 to 6 */
for(int i=0 ; i<8 ;i++)
{
	if(cardName[0]=='3'||cardName[0]=='5'||cardName[0]=='4'||cardName[0]=='6')
	{
		lowcard=lowcard+1;
		printf("low card Count has gone up by %i\n",lowcard);
	}
/* Otherwise check if the card was 10, J, Q, or K */
	else if(cardName[0]=='A'||cardName[0]=='J'||cardName[0]=='Q'||cardName[0]=='K')
	{
		highcard=highcard+1;
		printf("high Count has gone down by %i\n",highcard);
        }
printf("hit me !!\n: ");
scanf("%2s", cardName);
}
return 0;
}
