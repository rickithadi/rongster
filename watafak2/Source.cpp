#include<stdio.h>
#include<conio.h>
#include<string>
// twoThirty9.cpp : Defines the entry point for the console application.
//
#include "stdlib.h"

using namespace std;

int option, value;
int x, y;


int option1();
int option2();
int option3();
int option4();
int option5();
int option6();
int data();
int goodbye();
void menu();
int exitMenu();
bool login();

int main()
{
	login();
	
	
}





void menu() {
	printf("\n\n                                                     menu                           \n\n\n\n\ \n");
	printf("\n1.population of selected year\n");
	printf("\n2.ratio of citizen to PR population \n");
	printf("\n3.top three populations for selected category \n");
	printf("\n4.difference between citizen and total population \n");
	printf("\n5.maximum total resident population and corresponding year \n");
	printf("\n6.Lowest population density and corresponding year \n");
	printf("\n7. exit.\n\n\n\n ");

}

int option1() {

	int citizenValue,prValue,nrValue;
	
	x = 0;
	printf("choose a year\n");

	printf("1. 2010\n");
	printf("2. 2011\n");
	printf("3. 2012\n");
	printf("4. 2013\n");
	printf("5. 2014\n");
	scanf("%d", &y);
	y = y - 1;


	int PSI[][5] =
	{// 10	11 12  13  14
		{ 3230,3257,3285,3313,3343 },//citizens
		{ 541,532,533,531,527 },//PR
		{ 1305,1394,1494,1554,1598 },//NR
		{ 700,702,705,708,718 }//land


	};
	citizenValue = PSI[x][y];
	printf("number of citizens:");
	printf("%d\n", citizenValue);

	

	prValue = PSI[x+1][y];
	printf("number of PR:");
	printf("%d\n", prValue);
	
	nrValue = PSI[x+2][y];
	printf("number of non-residents:");
	printf("%d\n", nrValue);
	
	
	int finalValue = citizenValue + prValue+ nrValue;
	printf("total population\n");
	printf("%d",finalValue );
	 _getch();
	return finalValue;

}
int option2() {

	int diff, prValue, ratio;

	


	int PSI[][5] =
	{// 10	11 12  13  14
		{ 3230,3257,3285,3313,3343 },//citizens
		{ 541,532,533,531,527 },//PR
		{ 1305,1394,1494,1554,1598 },//NR
		{ 700,702,705,708,718 }//land


	};
	x = 0;
	printf("choose a year\n");

	printf("1. 2010\n");
	printf("2. 2011\n");
	printf("3. 2012\n");
	printf("4. 2013\n");
	printf("5. 2014\n");
	scanf("%d", &y);
	y = y - 1;


	diff = PSI[x][y];
	printf("number of citizens:");
	printf("%d\n", diff);
	


	prValue = PSI[x + 1][y];
	printf("number of PR:");
	printf("%d\n", prValue);
	



	ratio = diff / prValue;
	printf("ratio of citizens to PR\n");
	printf("%d", ratio);
	printf(":1");
	 _getch();
	return ratio;

}
int option3() {
	
	int temp = 0;

	int value1, value2, value3, value4, value5;


	x = 0;
	printf("choose a category\n");

	printf("1. citizens\n");
	printf("2. PR\n");
	printf("3. non resident\n");

	scanf("%d", &x);
	x = x - 1;


	int PSI[][5] =
	{// 10	11 12  13  14
		{ 3230,3257,3285,3313,3343 },//citizens
		{ 541,532,533,531,527 },//PR
		{ 1305,1394,1494,1554,1598 },//NR
		{ 700,702,705,708,718 }//land


	};
	value1 = PSI[x][y];
	value2 = PSI[x][y + 1];
	value3 = PSI[x][y + 2];
	value4 = PSI[x][y + 3];
	value5 = PSI[x][y + 4];




	printf("population in 2010: %d\n", value1);
	printf("population in 2011: %d\n", value2);
	printf("population in 2012: %d\n", value3);
	printf("population in 2013: %d\n", value4);
	printf("population in 2014: %d\n", value5);
	 _getch();


		return value;
	}
int option4() {
	int diff, prValue, nrValue;

	x = 0;
	y = 0;


	int PSI[][5] =
	{// 10	11 12  13  14
		{ 3230,3257,3285,3313,3343 },//citizens
		{ 541,532,533,531,527 },//PR
		{ 1305,1394,1494,1554,1598 },//NR
		{ 700,702,705,708,718 }//land


	};
	
	
	
	diff = PSI[x][y];
	prValue = PSI[x + 1][y];
	nrValue = PSI[x + 2][y];
	int totalPop = diff + prValue + nrValue;
	diff = totalPop - diff;



	printf("difference in 2010: ");
	printf("%d\n", diff);


	


	y = y + 1;
	diff = PSI[x][y];
	prValue = PSI[x + 1][y];
	nrValue = PSI[x + 2][y];
	totalPop = diff + prValue + nrValue;
	diff = totalPop - diff;

	printf("difference in 2011: ");
	printf("%d\n", diff);

	y = y + 1;
	diff = PSI[x][y];
	prValue = PSI[x + 1][y];
	nrValue = PSI[x + 2][y];
	totalPop = diff + prValue + nrValue;
	diff = totalPop - diff;

	printf("difference in 2012: ");
	printf("%d\n", diff);

	y = y + 1;
	diff = PSI[x][y];
	prValue = PSI[x + 1][y];
	nrValue = PSI[x + 2][y];
	totalPop = diff + prValue + nrValue;
	diff = totalPop - diff;


	printf("difference in 2013: ");
	printf("%d\n", diff);


	y = y + 1;
	diff = PSI[x][y];
	prValue = PSI[x + 1][y];
	nrValue = PSI[x + 2][y];
	totalPop = diff + prValue + nrValue;
	diff = totalPop - diff;

	printf("difference in 2014: ");
	printf("%d\n", diff);

	 _getch();
	return totalPop;

}
int option5() {
	int citizenValue, prValue, nrValue;

	x = 0;
	y = 0;


	int PSI[][5] =
	{// 10	11 12  13  14
		{ 3230,3257,3285,3313,3343 },//citizens
		{ 541,532,533,531,527 },//PR
		{ 1305,1394,1494,1554,1598 },//NR
		{ 700,702,705,708,718 }//land


	};
	citizenValue = PSI[x][y];
	prValue = PSI[x + 1][y];
	nrValue = PSI[x + 2][y];
	int finalValue = citizenValue + prValue + nrValue;


	printf("total population in 2010:");
	printf("%d\n", finalValue);


	y = y + 1;
	citizenValue = PSI[x][y];
	prValue = PSI[x + 1][y];
	nrValue = PSI[x + 2][y];
	finalValue = citizenValue + prValue + nrValue;


	printf("total population in 2011:");
	printf("%d\n", finalValue);


	y = y + 1;
	citizenValue = PSI[x][y];
	prValue = PSI[x + 1][y];
	nrValue = PSI[x + 2][y];
	finalValue = citizenValue + prValue + nrValue;


	printf("total population in 2012:");
	printf("%d\n", finalValue);


	y = y + 1;
	citizenValue = PSI[x][y];
	prValue = PSI[x + 1][y];
	nrValue = PSI[x + 2][y];
	finalValue = citizenValue + prValue + nrValue;

	printf("total population in 2013:");
	printf("%d\n", finalValue);




	y = y + 1;
	citizenValue = PSI[x][y];
	prValue = PSI[x + 1][y];
	nrValue = PSI[x + 2][y];
	finalValue = citizenValue + prValue + nrValue;

	printf("total population in 2014:");
	printf("%d\n", finalValue);








	 _getch();
	return finalValue;
}
int option6() {
	int citizenValue, prValue, nrValue,dValue;

	x = 0;
	y = 0;


	int PSI[][5] =
	{// 10	11 12  13  14
		{ 3230,3257,3285,3313,3343 },//citizens
		{ 541,532,533,531,527 },//PR
		{ 1305,1394,1494,1554,1598 },//NR
		{ 700,702,705,708,718 }//land


	};
	citizenValue = PSI[x][y];
	prValue = PSI[x + 1][y];
	nrValue = PSI[x + 2][y];
	dValue = PSI[x + 3][y];
	int finalValue = citizenValue + prValue + nrValue;
	int density = finalValue / dValue;


	printf("density in 2010:");
	printf("%d\n", density);


	y = y + 1;
	citizenValue = PSI[x][y];
	prValue = PSI[x + 1][y];
	nrValue = PSI[x + 2][y];
	dValue = PSI[x + 3][y];
	finalValue = citizenValue + prValue + nrValue;
	density = finalValue / dValue;

	printf("density in 2011:");
	printf("%d\n", density);


	y = y + 1;
	citizenValue = PSI[x][y];
	prValue = PSI[x + 1][y];
	nrValue = PSI[x + 2][y];
	dValue = PSI[x + 3][y];
	finalValue = citizenValue + prValue + nrValue;
	density = finalValue / dValue;


	printf("density in 2012:");
	printf("%d\n", density);


	y = y + 1;
	citizenValue = PSI[x][y];
	prValue = PSI[x + 1][y];
	nrValue = PSI[x + 2][y];
	dValue = PSI[x + 3][y];
	finalValue = citizenValue + prValue + nrValue;
	density = finalValue / dValue;

	printf("density in 2013:");
	printf("%d\n", density);




	y = y + 1;
	citizenValue = PSI[x][y];
	prValue = PSI[x + 1][y];
	nrValue = PSI[x + 2][y];
	dValue = PSI[x + 3][y];
	finalValue = citizenValue + prValue + nrValue;
	density = finalValue / dValue;

	printf("density in 2014:");
	printf("%d\n", density);








	 _getch();
	return finalValue;
}
int option7() {
	return 0;
}
int goodbye() {
	int choice = 0;
	printf("\n\n\n1. Menu\n2. Exit\n");
	scanf("%d", &choice);
	// _getch();
	if (choice == 1) {
		system("cls");
		exitMenu();
	}
	else if (choice == 2) {
		return 0;
	}
	else{
		printf("\ninvalid, now exiting");
		return 0;
	}
	return choice;
}


int exitMenu(){
menu();
scanf("%d", &option);
if (option == 1) {
	
	option1();
	goodbye();
}
else if (option == 2) {
	
	option2();
	goodbye();

}

else if (option == 3) {
	
	option3();
	goodbye();
}
else if (option == 4) {
	option4();
	goodbye();
}
else if (option == 5) {
	option5();
	goodbye();
}
else if (option == 6) {
	option6();
	goodbye();
}
else {
	
	return 0;
}
}
bool login() {
	string pass="";
	char ch;
	
	printf("enter password:");
	ch =  _getch();
	while (ch != 13 ) {
		pass.push_back(ch);
		printf("*");
		ch = _getch();
	}

	if (pass == "powerranger_tyr") {
		exitMenu();
	}
	else {
		return 0;
	}

}