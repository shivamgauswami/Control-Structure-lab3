#include<stdio.h>

main()
{
	int choise;
	
	printf("1 for January");
	printf("\n2 for February");
	printf("\n3 for March");
	printf("\n4 for April");
	printf("\n5 for May");
	printf("\n6 for June");
	printf("\n7 for July");
	printf("\n8 for August");
	printf("\n9 for September");
	printf("\n10 for October");
	printf("\n11 for November");
	printf("\n12 for December");
	printf("enter your choise ="); 
	scanf("%d",&choise);
	
	switch(choise)
	{
		
		case 1:
			printf(" January");
			break;
		case 2:
			printf(" February");
			break;
		case 3:
			printf(" March");
			break;
		case 4:
			printf(" April");
			break;
		case 5:
			printf(" May");
			break;
		case 6:
			printf(" June");
			break;
		case 7:
			printf(" July");
			break;
		case 8:
			printf(" August");
			break;
		case 9:
			printf(" September");
			break;
		case 10:
			printf(" October");
			break;
		case 11:
			printf(" November");
			break;
		case 12:
			printf(" December");
			
		default:
		    printf("somthing is wrong");
													
	}
	
	
}
