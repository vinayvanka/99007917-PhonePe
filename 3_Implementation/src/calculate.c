/**
 * @file calculate.c
 * @author vanka vinaya kumar (you@domain.com)
 * @brief ALL THE NECERARY CALCULATIOS ARE HERE FOR UNIT CALCULATOR UTILITY
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>


float calculate_length_menu1(int sub_value ,float value){


switch (sub_value)
{
case 1:      //kilometer_to_meter
    return value*1000;
    break;
case 2:      //kilometer_to_centimeter
    return value*100000;
    break;
case 3:      //kilometer_to_millimeter
    return value*1000000;
    break;
case 4:      //meter_to_kilometer
    return value/1000;
    break;
case 5:      //meter_to_centimeter
    return value*100;
    break;
case 6:      //meter_to_millimeter
    return value*1000;
    break;
case 7:      //centimeter_to_kilometer
    return value/100000;
    break;
case 8:      //centimeter_to_meter
    return value/100;
    break;
case 9:      //centimeter_to_millimeter
    return value*10;
    break;
case 10:      //millimeter_to_kilometer
    return value/1000000;
    break;
case 11:      //millimeter_to_meter
    return value/1000;
    break;
case 12:      //millimeter_to_centimeter
    return value/100;
    break;


default: printf("YOU ENTERED A WRONG INPUT");
    break;

}
return 0;

}

float calculate_length_menu2(int sub_value ,float value){


switch (sub_value)
{
case 1:      //inch_to_feet
    return value/12;
    break;
case 2:      //foot_to_inch
    return value*12;
    break;
case 3:      //yard_to_cent
    return value*91.44;
    break;
case 4:      //cent_to_yard
    return value/9;
    break;


default: printf("YOU ENTERED A WRONG INPUT");
    break;

}
return 0;


}


float calculate_weight_menu(int sub_value ,float value){


switch (sub_value)
{
case 1:      //kg_g
    return value*1000;
    break;
case 2:      //G_kg
    return value/1000;
    break;
case 3:      //kg_pound
    return value*2.2;
    break;
case 4:      //pound_kg
    return value/2.2;
    break;


default: printf("YOU ENTERED A WRONG INPUT");
    break;

}
return 0;


}

float calculate_temprature_menu(int sub_value ,float value){


switch (sub_value)
{
case 1:      //c to f
    return (value*(9/5))+32;
    break;
case 2:      //f to c
    return (value-32)*(5/9);
    break;


default: printf("YOU ENTERED A WRONG INPUT");
    break;

}
return 0;


}










