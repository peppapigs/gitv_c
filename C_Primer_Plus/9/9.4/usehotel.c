#include <stdio.h>
#include "hotel.h"   //因为此文件也用到了hotel.h中定义的宏

int main(void){

        int nights;
        double hotel_rate;
        int code;

        while((code = menu()) != QUIT){

                switch(code){
                        case 1:
                                hotel_rate = HOTEL1;
                                break;
                        case 2:
                                hotel_rate = HOTEL2;
                                break;
                        case 3:
                                hotel_rate = HOTEL3;
                                break;
                        case 4:
                                hotel_rate = HOTEL4;
                                break;
                        default:
                                break; //退出
                }

                printf("please enter the nights: ");
                nights = getnights();
                printf("please enter the hotel_rate: ");
                showprice(hotel_rate, nights);

        }

        printf("see you! welcome back!\n");

        return 0;
}
