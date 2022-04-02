/**
 * @file display.c
 * @author vanka vinay kumar (you@domain.com)
 * @brief  this file include all the functions whic are useful to communicate with user and to take user input and to show their output
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>



int display_main_menu(void)    // DISPLAY MAIN MENU TO USER
{
int main_menu;

printf("                           Welcome to Unit Converter Utility\n");
printf("\n************************************ MAIN MENU *****************************************\n\n");
printf("\n1-LENGTH     (1)\n");
printf("\n2-WEIGHT     (2)\n");
printf("\n3-TEMPRATURE (3)\n");
printf("\n\n\n\n\n Enter your choice? (numeric value only) : ");

scanf("%d",&main_menu);
while(main_menu>6 || main_menu<1){
printf("\n YOU ENTERED WRONG INPUT TRY AGAIN : ");
scanf("%d",&main_menu);
}

return main_menu;
}

int display_length_menu1(void)     // DISPLAY THE LENGTH MENU 1 TO USER
{

int length_menu;



printf("\n************************************************ LENGTH  *******************************************\n\n");
printf("\n***************************************** METRIC UNITS CONVERT FROM ********************************\n\n");
printf("\n 1-KILOMETER TO METER               2-KILOMETER TO CENTIMETER             3-KILOMETER TO MILLIMETER\n");
printf("\n 4-METER TO KILOMETER               5-METER TO CENTIMETER                 6-METER TO MILLIMETER\n");
printf("\n 7-CENTIMETER TO KILOMETER          8-CENTIMETER TO METER                 9-CENTIMETER TO MILLIMETER\n");
printf("\n10-MILLIMETER TO KILOMETER         11-MILLIMETER TO METER                12-MILLIMETER TO CENTIMETER\n");
printf("\n \n                                      press 0 for MORE OPTIONS                                        \n");
printf("\n\n\n Enter your choice ?(numeric value only) :   ");
scanf("%d",&length_menu);
while(length_menu>12 || length_menu<0){
printf("\n YOU ENTERED WRONG INPUT TRY AGAIN : ");
scanf("%d",&length_menu);
}

    return length_menu;
}



int display_length_menu2(void){                 //DISPLAYS THE LENGTH MENU

    int length_menu;

printf("\n******************************************** LENGTH  *******************************************\n\n");
printf("\n********************************** IMPERIAL UNITS CONVERT FROM ********************************\n\n");
printf("\n1-INCH to FEET                       2-FOOT to INCH                           3-YARD t0 CENT\n");
printf("\n4-CENT to YARD        \n");

printf("\n\n\n Enter your choice ?(numeric value only) : ");
scanf("%d",&length_menu);


while(length_menu>4 || length_menu<1){
printf("\n YOU ENTERED WRONG INPUT TRY AGAIN : ");
scanf("%d",&length_menu);
    }


    return length_menu;
}


int display_weight_menu(void)      //DISPLAYS THE WEIGHT MENU
{

int weight_menu;


printf("\n************************************************ WEIGHT *************************************************\n\n");
printf("\n1-KILOGRAM TO GRAM                       2-GRAM TO KILOGRAM                           3-KILOGRAM TO POUND\n");
printf("\n4-POUND TO KILOGRAM        \n");
printf("\n\n\n Enter your choice ?(numeric value only)");
scanf("%d",&weight_menu);

while(weight_menu>4 || weight_menu<1){
printf("\n YOU ENTERED WRONG INPUT TRY AGAIN : ");
scanf("%d",&weight_menu);
}


return weight_menu;

}


int display_temprature_menu(void){              //DISPLAYS THE TEMPRATURE MENU

int temprature_menu;


printf("\n************************************************ WEIGHT *************************************************\n\n");
printf("\n1-KILOGRAM TO GRAM                       2-GRAM TO KILOGRAM                           3-KILOGRAM TO POUND\n");
printf("\n4-POUND TO KILOGRAM        \n");
printf("\n\n\n Enter your choice ?(numeric value only)");
scanf("%d",&temprature_menu);

while(temprature_menu>4 || temprature_menu<1){
printf("\n YOU ENTERED WRONG INPUT TRY AGAIN : ");
scanf("%d",&temprature_menu);
}

return temprature_menu;

}



float display_value(void)                       // DISPLAYS VALUE
{

float value;

 printf("\n\nEnter the value that you want to convert : ");
 scanf("%f",&value);

return value;
}

void display_answer(float ans){                         //DISPLAY  ANSWER

printf("\n\nConverted value is : %f",ans);

}


