#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main()

{

    int units;
	int i;

    float total_bill;
    system("color 0B");
     static CONSOLE_FONT_INFOEX  fontex;
     fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
     HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
     GetCurrentConsoleFontEx(hOut, 0, &fontex);
     fontex.FontWeight = 300;
     fontex.dwFontSize.X = 25;
     fontex.dwFontSize.Y = 25;
     SetCurrentConsoleFontEx(hOut, NULL, &fontex);
     char cont = 'y';
while(cont == 'y'){
    printf("\n\n\t\t WELLCOME TO ELECTRICITY BILLING SYSTEM \n\n");

    printf("\t       ELECTRICITY TARIFF FOR HOUSEHOLDS (Rates/Unit)\n\n");

  for(i=0;i<70;i++)
		printf("=");
    printf("\n\t Upto 20 Units .............................. =taka.3/Unit      |\n\n");

    printf("\t 21 To 30 Units .............................. =taka.7/Unit     |\n\n");

    printf("\t 31 To 50 Units .............................. =taka.8/Unit     |\n\n");

    printf("\t 51 To 150 Units ..............................=taka.10/Unit    |\n\n");

    printf("\t 151 To 250 Units .............................. =taka.11/Unit  |\n\n");

    printf("\t 251 To 400 Units .............................. =taka.12/Unit  |\n\n");

    printf("\t400+ Units ................................. =taka.13/Unit      |\n\n");
	for(i=0;i<70;i++)
		printf("=");

    printf("\nPlease Enter Your Total Units Consumed : \n\n");


    scanf("%d", & units);

    if (units <= 20)

    total_bill = units * 3;

    else if (units <= 30)

    total_bill = units * 7;

    else if (units <= 50)

    total_bill = units * 8;

    else if (units <= 150)

    total_bill = units * 10;

    else if (units <= 250)

    total_bill = units * 11;

    else if (units <= 400)

    total_bill = units * 12;

    else total_bill = units * 13;


    printf("\n\nYour Total Bill Is taka=%f", total_bill);


    getch();
    printf("\n\nDo you want to continue?[y/n]:\t");
scanf("%s",&cont);
system("cls");
}
}
