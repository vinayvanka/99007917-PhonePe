/**
 * @file main.c
 * @author vanka vinaya kumar (you@domain.com)
 * @brief THIS IS THE MAIN FILE WHICH INCYULED THE DISPLAY AND CALCULATIONS HEADER FILE  IN THIS IT WILL CALL THE NECERARY FUNCTIONS WHEN REQUIRED
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>
#include"display.h"
#include"calculate.h"


extern int test(void);

int main(){
test();
int main_menu;
main_menu=display_main_menu();
int sub_menu;
float value=0.0;
float ans=0.0;


switch (main_menu)
{
 case 1:{
     sub_menu=display_length_menu1();
     if(sub_menu == 0)
        {
            sub_menu=display_length_menu2();
            value=display_value();
            ans=calculate_length_menu2(sub_menu , value);
            display_answer(ans);
        }
            else{
            value=display_value();
            ans=calculate_length_menu1(sub_menu , value);
            display_answer(ans);
            }
            

}
     break;

     case 2:{
            int sub_menu=display_weight_menu();
            value=display_value();
            ans=calculate_weight_menu(sub_menu , value);
            display_answer(ans);
    }
   
         break;
     case 3:{

            sub_menu=display_temprature_menu();
            value=display_value();
            ans=calculate_temprature_menu(sub_menu , value);
            display_answer(ans);

     }
        break;

 default:
     break;
}

}





